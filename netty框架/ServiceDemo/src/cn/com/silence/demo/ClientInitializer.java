package cn.com.silence.demo;

import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.socket.SocketChannel;
import io.netty.handler.codec.DelimiterBasedFrameDecoder;
import io.netty.handler.codec.Delimiters;
import io.netty.handler.codec.string.StringDecoder;
import io.netty.handler.codec.string.StringEncoder;

/**
 * 
 * @title ClientInitializer.java
 * @author liyuanguo
 * @time 2016年11月25日 上午10:09:54
 * @description TODO
 * @version V1.0
 */
public class ClientInitializer extends ChannelInitializer<SocketChannel> {

	@Override
	protected void initChannel(SocketChannel arg0) throws Exception {
		ChannelPipeline p = arg0.pipeline();
		// p.addLast("framer", new DelimiterBasedFrameDecoder(8192,
		// Delimiters.lineDelimiter()));
		p.addLast("decoder", new StringDecoder());
		p.addLast("encoder", new StringEncoder());
		p.addLast(new ClientHandler());
	}

}
