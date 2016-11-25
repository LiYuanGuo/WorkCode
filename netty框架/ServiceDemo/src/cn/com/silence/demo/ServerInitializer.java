package cn.com.silence.demo;


import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.socket.SocketChannel;
import io.netty.handler.codec.protobuf.ProtobufDecoder;
import io.netty.handler.codec.protobuf.ProtobufEncoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32FrameDecoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32LengthFieldPrepender;
import io.netty.handler.codec.string.StringDecoder;
import io.netty.handler.codec.string.StringEncoder;

/**
 * 
 * @title ServerInitializer.java
 * @author liyuanguo
 * @time 2016年11月25日 上午10:10:30
 * @description TODO
 * @version V1.0
 */
public class ServerInitializer extends ChannelInitializer<SocketChannel> {

	@Override
	protected void initChannel(SocketChannel ch) throws Exception {
		/*
		 * ChannelPipeline p = ch.pipeline();
		p.addLast("frameDecoder", new ProtobufVarint32FrameDecoder());
		//收到的信息自动转换为对应类型
		p.addLast(new ProtobufDecoder(ClientBuffer.getDefaultInstance()));
		p.addLast("frameEncoder", new ProtobufVarint32LengthFieldPrepender());
		p.addLast(new ProtobufEncoder());
		p.addLast(new ServerHandler());
		 */
		ChannelPipeline p = ch.pipeline();
		p.addLast("decoder", new StringDecoder());
		p.addLast("encoder", new StringEncoder());
		p.addLast(new ServerHandler());

	}

}
