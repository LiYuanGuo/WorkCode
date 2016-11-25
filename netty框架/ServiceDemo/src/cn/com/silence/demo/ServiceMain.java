package cn.com.silence.demo;

import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.ChannelFuture;
import io.netty.channel.ChannelOption;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.nio.NioServerSocketChannel;

/**
 * 
 * @title ServiceMain.java
 * @author liyuanguo
 * @time 2016年11月25日 上午10:10:41
 * @description TODO
 * @version V1.0
 */
public class ServiceMain {
	private static final int PORT = 7676;

	public static void main(String[] args) {
		EventLoopGroup parentGroup = new NioEventLoopGroup();
		EventLoopGroup childrenGroup = new NioEventLoopGroup();
		try {
			ServerBootstrap serverBootstrap = new ServerBootstrap();
			serverBootstrap.group(parentGroup, childrenGroup);
			serverBootstrap.channel(NioServerSocketChannel.class);
			serverBootstrap.option(ChannelOption.SO_BACKLOG, 1024); // 连接数
			serverBootstrap.option(ChannelOption.TCP_NODELAY, true); // 不延迟，消息立即发送
			serverBootstrap.childOption(ChannelOption.SO_KEEPALIVE, true); // 长连接
			// 添加工作线程
			serverBootstrap.childHandler(new ServerInitializer());
			// 服务器绑定端口监听
			ChannelFuture cf = serverBootstrap.bind(PORT).sync();
			if (cf.isSuccess()) {
				System.out.println("服务端启动成功====" + cf.channel().localAddress());
			}
			// 监听服务器关闭监听
			cf.channel().closeFuture().sync();
			System.out.println("服务端关闭");
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			parentGroup.shutdownGracefully();
			childrenGroup.shutdownGracefully();
		}
	}
}
