// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_SystemImpl
#define INCLUDED_kha_SystemImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,Position)
HX_DECLARE_CLASS1(kha,ScreenRotation)
HX_DECLARE_CLASS1(kha,SystemImpl)
HX_DECLARE_CLASS1(kha,TargetDisplay)
HX_DECLARE_CLASS1(kha,WindowMode)
HX_DECLARE_CLASS1(kha,WindowOptions)
HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)
HX_DECLARE_CLASS2(kha,input,Gamepad)
HX_DECLARE_CLASS2(kha,input,Keyboard)
HX_DECLARE_CLASS2(kha,input,Mouse)
HX_DECLARE_CLASS2(kha,input,Pen)
HX_DECLARE_CLASS2(kha,input,Surface)
HX_DECLARE_CLASS2(kha,network,Controller)


#include <Kore/pch.h>
#include <Kore/System.h>
#include <Kore/Input/Mouse.h>
#include <Kore/Input/Pen.h>
#include <Kore/Window.h>

void init_kore(const char* name, int width, int height, int antialiasing, bool vsync, int windowMode, bool resizable, bool maximizable, bool minimizable);
void init_kore_ex(const char* name);
void post_kore_init();
void run_kore();
int init_window(Kore::WindowOptions windowOptions);
const char* getGamepadId(int index);

namespace kha{


class HXCPP_CLASS_ATTRIBUTES SystemImpl_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SystemImpl_obj OBJ_;
		SystemImpl_obj();

	public:
		enum { _hx_ClassId = 0x69d75eab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.SystemImpl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.SystemImpl"); }

		hx::ObjectPtr< SystemImpl_obj > __new() {
			hx::ObjectPtr< SystemImpl_obj > __this = new SystemImpl_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SystemImpl_obj > __alloc(hx::Ctx *_hx_ctx) {
			SystemImpl_obj *__this = (SystemImpl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SystemImpl_obj), false, "kha.SystemImpl"));
			*(void **)__this = SystemImpl_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SystemImpl_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SystemImpl","\x8f","\xe9","\xee","\xea"); }

		static void __boot();
		static bool needs3d;
		static  ::kha::input::Mouse getMouse(int num);
		static ::Dynamic getMouse_dyn();

		static  ::kha::input::Pen getPen(int num);
		static ::Dynamic getPen_dyn();

		static  ::kha::input::Keyboard getKeyboard(int num);
		static ::Dynamic getKeyboard_dyn();

		static Float getTime();
		static ::Dynamic getTime_dyn();

		static int windowWidth(int windowId);
		static ::Dynamic windowWidth_dyn();

		static int windowHeight(int windowId);
		static ::Dynamic windowHeight_dyn();

		static int screenDpi();
		static ::Dynamic screenDpi_dyn();

		static bool getVsync();
		static ::Dynamic getVsync_dyn();

		static int getRefreshRate();
		static ::Dynamic getRefreshRate_dyn();

		static  ::kha::ScreenRotation getScreenRotation();
		static ::Dynamic getScreenRotation_dyn();

		static ::String getSystemId();
		static ::Dynamic getSystemId_dyn();

		static void requestShutdown();
		static ::Dynamic requestShutdown_dyn();

		static ::Array< ::Dynamic> framebuffers;
		static  ::kha::input::Keyboard keyboard;
		static  ::kha::input::Mouse mouse;
		static  ::kha::input::Pen pen;
		static  ::kha::input::Gamepad gamepad1;
		static  ::kha::input::Gamepad gamepad2;
		static  ::kha::input::Gamepad gamepad3;
		static  ::kha::input::Gamepad gamepad4;
		static  ::kha::input::Surface surface;
		static ::Array< ::Dynamic> mouseLockListeners;
		static void init( ::Dynamic options, ::Dynamic callback);
		static ::Dynamic init_dyn();

		static void initEx(::String title,::Array< ::Dynamic> options, ::Dynamic windowCallback, ::Dynamic callback);
		static ::Dynamic initEx_dyn();

		static void postInit( ::Dynamic callback);
		static ::Dynamic postInit_dyn();

		static void loadFinished();
		static ::Dynamic loadFinished_dyn();

		static void lockMouse(hx::Null< int >  windowId);
		static ::Dynamic lockMouse_dyn();

		static void unlockMouse(hx::Null< int >  windowId);
		static ::Dynamic unlockMouse_dyn();

		static bool canLockMouse(hx::Null< int >  windowId);
		static ::Dynamic canLockMouse_dyn();

		static bool isMouseLocked(hx::Null< int >  windowId);
		static ::Dynamic isMouseLocked_dyn();

		static void notifyOfMouseLockChange( ::Dynamic func, ::Dynamic error,hx::Null< int >  windowId);
		static ::Dynamic notifyOfMouseLockChange_dyn();

		static void removeFromMouseLockChange( ::Dynamic func, ::Dynamic error,hx::Null< int >  windowId);
		static ::Dynamic removeFromMouseLockChange_dyn();

		static void hideSystemCursor();
		static ::Dynamic hideSystemCursor_dyn();

		static void showSystemCursor();
		static ::Dynamic showSystemCursor_dyn();

		static void frame(int id);
		static ::Dynamic frame_dyn();

		static void keyDown(int code);
		static ::Dynamic keyDown_dyn();

		static void keyUp(int code);
		static ::Dynamic keyUp_dyn();

		static void keyPress(int _hx_char);
		static ::Dynamic keyPress_dyn();

		static int mouseX;
		static int mouseY;
		static void mouseDown(int windowId,int button,int x,int y);
		static ::Dynamic mouseDown_dyn();

		static void mouseUp(int windowId,int button,int x,int y);
		static ::Dynamic mouseUp_dyn();

		static void mouseMove(int windowId,int x,int y,int movementX,int movementY);
		static ::Dynamic mouseMove_dyn();

		static void mouseWheel(int windowId,int delta);
		static ::Dynamic mouseWheel_dyn();

		static void mouseLeave(int windowId);
		static ::Dynamic mouseLeave_dyn();

		static void penDown(int windowId,int x,int y,Float pressure);
		static ::Dynamic penDown_dyn();

		static void penUp(int windowId,int x,int y,Float pressure);
		static ::Dynamic penUp_dyn();

		static void penMove(int windowId,int x,int y,Float pressure);
		static ::Dynamic penMove_dyn();

		static void gamepad1Axis(int axis,Float value);
		static ::Dynamic gamepad1Axis_dyn();

		static void gamepad1Button(int button,Float value);
		static ::Dynamic gamepad1Button_dyn();

		static void gamepad2Axis(int axis,Float value);
		static ::Dynamic gamepad2Axis_dyn();

		static void gamepad2Button(int button,Float value);
		static ::Dynamic gamepad2Button_dyn();

		static void gamepad3Axis(int axis,Float value);
		static ::Dynamic gamepad3Axis_dyn();

		static void gamepad3Button(int button,Float value);
		static ::Dynamic gamepad3Button_dyn();

		static void gamepad4Axis(int axis,Float value);
		static ::Dynamic gamepad4Axis_dyn();

		static void gamepad4Button(int button,Float value);
		static ::Dynamic gamepad4Button_dyn();

		static void touchStart(int index,int x,int y);
		static ::Dynamic touchStart_dyn();

		static void touchEnd(int index,int x,int y);
		static ::Dynamic touchEnd_dyn();

		static void touchMove(int index,int x,int y);
		static ::Dynamic touchMove_dyn();

		static void foreground();
		static ::Dynamic foreground_dyn();

		static void resume();
		static ::Dynamic resume_dyn();

		static void pause();
		static ::Dynamic pause_dyn();

		static void background();
		static ::Dynamic background_dyn();

		static void shutdown();
		static ::Dynamic shutdown_dyn();

		static void dropFiles(::String filePath);
		static ::Dynamic dropFiles_dyn();

		static ::String copy();
		static ::Dynamic copy_dyn();

		static ::String cut();
		static ::Dynamic cut_dyn();

		static void paste(::String data);
		static ::Dynamic paste_dyn();

		static void initKore(::String name,int width,int height,int antialiasing,bool vSync,int windowMode,bool resizable,bool maximizable,bool minimizable);
		static ::Dynamic initKore_dyn();

		static int translatePosition( ::kha::Position value);
		static ::Dynamic translatePosition_dyn();

		static int translateDisplay( ::kha::TargetDisplay value);
		static ::Dynamic translateDisplay_dyn();

		static int translateWindowMode( ::kha::WindowMode value);
		static ::Dynamic translateWindowMode_dyn();

		static int translateDepthBufferFormat( ::Dynamic value);
		static ::Dynamic translateDepthBufferFormat_dyn();

		static int translateStencilBufferFormat( ::Dynamic value);
		static ::Dynamic translateStencilBufferFormat_dyn();

		static int translateTextureFormat( ::kha::graphics4::TextureFormat value);
		static ::Dynamic translateTextureFormat_dyn();

		static int initWindow2(::String title,int x,int y,int width,int height,int targetDisplay,int textureFormat,int depthBufferBits,int stencilBufferBits,bool resizable,bool maximizable,bool minimizable,int mode);
		static ::Dynamic initWindow2_dyn();

		static void initWindow( ::kha::WindowOptions options, ::Dynamic callback);
		static ::Dynamic initWindow_dyn();

		static ::Array< ::Dynamic> fullscreenListeners;
		static int previousWidth;
		static int previousHeight;
		static bool canSwitchFullscreen();
		static ::Dynamic canSwitchFullscreen_dyn();

		static bool isFullscreen();
		static ::Dynamic isFullscreen_dyn();

		static void requestFullscreen();
		static ::Dynamic requestFullscreen_dyn();

		static void exitFullscreen();
		static ::Dynamic exitFullscreen_dyn();

		static void notifyOfFullscreenChange( ::Dynamic func, ::Dynamic error);
		static ::Dynamic notifyOfFullscreenChange_dyn();

		static void removeFromFullscreenChange( ::Dynamic func, ::Dynamic error);
		static ::Dynamic removeFromFullscreenChange_dyn();

		static void changeResolution(int width,int height);
		static ::Dynamic changeResolution_dyn();

		static void setKeepScreenOn(bool on);
		static ::Dynamic setKeepScreenOn_dyn();

		static void loadUrl(::String url);
		static ::Dynamic loadUrl_dyn();

		static ::String getGamepadId(int index);
		static ::Dynamic getGamepadId_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_SystemImpl */ 
