package cn.com.silence.demo;

import java.util.Timer;
import java.util.TimerTask;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;

/**
 * 
 * @title ClientHandler.java
 * @author liyuanguo
 * @time 2016年11月25日 上午10:09:45
 * @description TODO
 * @version V1.0
 */
public class ClientHandler extends SimpleChannelInboundHandler<Object> {
	public static ChannelHandlerContext mChannelHandlerContext;
	private int i = 0;
	private Timer mTimer = new Timer();

	@Override
	public void channelActive(ChannelHandlerContext ctx) throws Exception {
		super.channelActive(ctx);
		System.out.println("========channelActive=======");
		mChannelHandlerContext = ctx;
		mTimer.schedule(timerTask, 0, 5000);
	}

	@Override
	public void channelRegistered(ChannelHandlerContext ctx) throws Exception {
		super.channelRegistered(ctx);
		System.out.println("========channelRegistered=======");
	}

	@Override
	public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
		super.channelUnregistered(ctx);
		System.out.println("========channelUnregistered=======");
	}

	@Override
	public void channelInactive(ChannelHandlerContext ctx) throws Exception {
		super.channelInactive(ctx);
		System.out.println("========channelInactive=======");
	}

	@Override
	public void channelReadComplete(ChannelHandlerContext ctx) throws Exception {
		super.channelReadComplete(ctx);
		System.out.println("========channelReadComplete=======");
	}

	@Override
	public void channelWritabilityChanged(ChannelHandlerContext ctx) throws Exception {
		super.channelWritabilityChanged(ctx);
		System.out.println("========channelWritabilityChanged=======");
	}

	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		super.handlerAdded(ctx);
		System.out.println("========handlerAdded=======");
	}

	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		super.handlerRemoved(ctx);
		System.out.println("========handlerRemoved=======");
	}

	@Override
	protected void channelRead0(ChannelHandlerContext arg0, Object arg1) throws Exception {
		System.out.println("========channelRead0=======");
		System.out.println("========接收数据=======" + arg1.toString());
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) throws Exception {
		System.out.println("========exceptionCaught=======");
		cause.printStackTrace();
		ctx.close();
	}

	private TimerTask timerTask = new TimerTask() {

		@Override
		public void run() {
			mChannelHandlerContext.writeAndFlush("=====" + i++ + "\n");
		}
	};
}
