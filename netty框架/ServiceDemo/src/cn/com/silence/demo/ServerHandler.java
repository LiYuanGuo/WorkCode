package cn.com.silence.demo;

import java.util.Timer;
import java.util.TimerTask;

import com.sun.org.apache.bcel.internal.generic.NEW;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import io.netty.channel.group.ChannelGroup;
import io.netty.channel.group.DefaultChannelGroup;
import io.netty.util.concurrent.GlobalEventExecutor;

/**
 * 
 * @title ServerHandler.java
 * @author liyuanguo
 * @time 2016年11月25日 上午10:10:21
 * @description TODO
 * @version V1.0
 */
public class ServerHandler extends SimpleChannelInboundHandler<Object> {
	public static ChannelGroup channels = new DefaultChannelGroup(GlobalEventExecutor.INSTANCE);
	private Timer mTimer = new Timer();
	private ChannelHandlerContext mChannelHandlerContext;
	private boolean mOnece = true;

	@Override
	protected void channelRead0(ChannelHandlerContext ctx, Object msg) throws Exception {
		mChannelHandlerContext = ctx;
		System.out.println("消息内容：" + msg);
		System.out.println("");
		if (mOnece) {
			mOnece = false;
			mTimer.schedule(mTimerTask, 0, 3000);
		}
	}

	@Override
	public void handlerAdded(ChannelHandlerContext ctx) throws Exception {
		super.handlerAdded(ctx);
		mChannelHandlerContext = ctx;
		channels.add(ctx.channel());
		System.out.println("接收到连接：" + ctx.channel().remoteAddress());
	}

	@Override
	public void channelActive(ChannelHandlerContext ctx) throws Exception {
		super.channelActive(ctx);
		mChannelHandlerContext = ctx;
		System.out.println("客户端：" + ctx.channel().remoteAddress());
	}

	@Override
	public void handlerRemoved(ChannelHandlerContext ctx) throws Exception {
		super.handlerRemoved(ctx);
		System.out.println("断开连接：" + ctx.channel().remoteAddress());
		if (mTimerTask != null) {
			mTimerTask.cancel();
		}
		if (mTimer != null) {
			mTimer.cancel();

		}
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) throws Exception {
		System.out.println("服务端异常：" + cause.getMessage());
		cause.printStackTrace();
		ctx.close();
	}

	private TimerTask mTimerTask = new TimerTask() {

		@Override
		public void run() {
			String s = "晓得咯" + "\n";
			mChannelHandlerContext.write(s);
			mChannelHandlerContext.flush();
			System.out.println("发送了");
		}
	};
}
