package cn.com.silence.demo;

import io.netty.bootstrap.Bootstrap;
import io.netty.channel.Channel;
import io.netty.channel.ChannelOption;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.nio.NioSocketChannel;

/**
 * 
 * @title MySocket.java
 * @author liyuanguo
 * @time 2016年11月25日 上午10:10:12
 * @description TODO
 * @version V1.0
 */
public class MySocket {
	private static MySocket mySocket;
	private final String HOST = "192.168.6.215";
	private final int PORT = 7676;

	public static MySocket getInstence() {
		if (mySocket == null) {
			mySocket = new MySocket();
		}
		return mySocket;
	}

	private MySocket() {
		init();

	}

	private void init() {
		EventLoopGroup group = new NioEventLoopGroup();
		try {
			Bootstrap bootstrap = new Bootstrap();
			bootstrap.group(group);
			bootstrap.channel(NioSocketChannel.class);
			bootstrap.handler(new ClientInitializer());
			bootstrap.option(ChannelOption.SO_KEEPALIVE, true);

			Channel mChannel = bootstrap.connect(HOST, PORT).sync().channel();
			mChannel.closeFuture().sync();
			System.out.println("客户端关闭");
		} catch (InterruptedException e) {
			e.printStackTrace();
		} finally {
			group.shutdownGracefully();
		}
	}

	public boolean send(Object o) {
		if (ClientHandler.mChannelHandlerContext != null) {
			return ClientHandler.mChannelHandlerContext.writeAndFlush(o).isSuccess();
		}
		return false;
	}

	public void close() {
		if (ClientHandler.mChannelHandlerContext != null) {
			ClientHandler.mChannelHandlerContext.close();
			ClientHandler.mChannelHandlerContext = null;
		}
	}

	public boolean isActive() {
		if (ClientHandler.mChannelHandlerContext != null) {
			return ClientHandler.mChannelHandlerContext.channel().isActive();
		}
		return false;
	}
}
