// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_input_Mouse
#define INCLUDED_kha_input_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,input,Mouse)
HX_DECLARE_CLASS2(kha,network,Controller)

namespace kha{
namespace input{


class HXCPP_CLASS_ATTRIBUTES Mouse_obj : public  ::kha::network::Controller_obj
{
	public:
		typedef  ::kha::network::Controller_obj super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();

	public:
		enum { _hx_ClassId = 0x0aafe25f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.input.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.input.Mouse"); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static hx::ObjectPtr< Mouse_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::kha::input::Mouse get(hx::Null< int >  num);
		static ::Dynamic get_dyn();

		static  ::kha::input::Mouse instance;
		void notify( ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener, ::Dynamic wheelListener, ::Dynamic leaveListener);
		::Dynamic notify_dyn();

		void remove( ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener, ::Dynamic wheelListener, ::Dynamic leaveListener);
		::Dynamic remove_dyn();

		void notifyWindowed(int windowId, ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener, ::Dynamic wheelListener, ::Dynamic leaveListener);
		::Dynamic notifyWindowed_dyn();

		void removeWindowed(int windowId, ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener, ::Dynamic wheelListener, ::Dynamic leaveListener);
		::Dynamic removeWindowed_dyn();

		virtual void lock();
		::Dynamic lock_dyn();

		virtual void unlock();
		::Dynamic unlock_dyn();

		virtual bool canLock();
		::Dynamic canLock_dyn();

		virtual bool isLocked();
		::Dynamic isLocked_dyn();

		virtual void notifyOnLockChange( ::Dynamic change, ::Dynamic error);
		::Dynamic notifyOnLockChange_dyn();

		virtual void removeFromLockChange( ::Dynamic change, ::Dynamic error);
		::Dynamic removeFromLockChange_dyn();

		virtual void hideSystemCursor();
		::Dynamic hideSystemCursor_dyn();

		virtual void showSystemCursor();
		::Dynamic showSystemCursor_dyn();

		::Array< ::Dynamic> windowDownListeners;
		::Array< ::Dynamic> windowUpListeners;
		::Array< ::Dynamic> windowMoveListeners;
		::Array< ::Dynamic> windowWheelListeners;
		::Array< ::Dynamic> windowLeaveListeners;
		void sendLeaveEvent(int windowId);
		::Dynamic sendLeaveEvent_dyn();

		void sendDownEvent(int windowId,int button,int x,int y);
		::Dynamic sendDownEvent_dyn();

		void sendUpEvent(int windowId,int button,int x,int y);
		::Dynamic sendUpEvent_dyn();

		void sendMoveEvent(int windowId,int x,int y,int movementX,int movementY);
		::Dynamic sendMoveEvent_dyn();

		void sendWheelEvent(int windowId,int delta);
		::Dynamic sendWheelEvent_dyn();

		virtual void _receive( ::haxe::io::Bytes bytes);

};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_Mouse */ 
