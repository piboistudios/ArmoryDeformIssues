// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_iron_App
#include <iron/App.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_system_Input
#include <iron/system/Input.h>
#endif
#ifndef INCLUDED_iron_system_Time
#include <iron/system/Time.h>
#endif
#ifndef INCLUDED_iron_system_Tween
#include <iron/system/Tween.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb1bef2ea304260d_34_new,"iron.App","new",0x982d7ccd,"iron.App.new","iron/App.hx",34,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_9_w,"iron.App","w",0x94f7c7a4,"iron.App.w","iron/App.hx",9,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_10_h,"iron.App","h",0x94f7c795,"iron.App.h","iron/App.hx",10,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_31_init,"iron.App","init",0x8c586e03,"iron.App.init","iron/App.hx",31,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_41_reset,"iron.App","reset",0x69b7ab7c,"iron.App.reset","iron/App.hx",41,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_52_update,"iron.App","update",0x958b9bbc,"iron.App.update","iron/App.hx",52,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_105_render,"iron.App","render",0x13af8109,"iron.App.render","iron/App.hx",105,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_132_render2D,"iron.App","render2D",0xff58c11b,"iron.App.render2D","iron/App.hx",132,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_141_notifyOnInit,"iron.App","notifyOnInit",0x63522d6b,"iron.App.notifyOnInit","iron/App.hx",141,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_145_removeInit,"iron.App","removeInit",0x0748e0a7,"iron.App.removeInit","iron/App.hx",145,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_149_notifyOnUpdate,"iron.App","notifyOnUpdate",0x6e020524,"iron.App.notifyOnUpdate","iron/App.hx",149,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_153_removeUpdate,"iron.App","removeUpdate",0x0378ff60,"iron.App.removeUpdate","iron/App.hx",153,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_157_notifyOnLateUpdate,"iron.App","notifyOnLateUpdate",0x9fca8e6a,"iron.App.notifyOnLateUpdate","iron/App.hx",157,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_161_removeLateUpdate,"iron.App","removeLateUpdate",0xe15156a6,"iron.App.removeLateUpdate","iron/App.hx",161,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_165_notifyOnRender,"iron.App","notifyOnRender",0xec25ea71,"iron.App.notifyOnRender","iron/App.hx",165,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_169_removeRender,"iron.App","removeRender",0x819ce4ad,"iron.App.removeRender","iron/App.hx",169,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_173_notifyOnRender2D,"iron.App","notifyOnRender2D",0xb14a5483,"iron.App.notifyOnRender2D","iron/App.hx",173,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_177_removeRender2D,"iron.App","removeRender2D",0xce2155bf,"iron.App.removeRender2D","iron/App.hx",177,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_13_boot,"iron.App","boot",0x87b8b725,"iron.App.boot","iron/App.hx",13,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_14_boot,"iron.App","boot",0x87b8b725,"iron.App.boot","iron/App.hx",14,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_15_boot,"iron.App","boot",0x87b8b725,"iron.App.boot","iron/App.hx",15,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_16_boot,"iron.App","boot",0x87b8b725,"iron.App.boot","iron/App.hx",16,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_17_boot,"iron.App","boot",0x87b8b725,"iron.App.boot","iron/App.hx",17,0xed6c5204)
HX_LOCAL_STACK_FRAME(_hx_pos_eb1bef2ea304260d_18_boot,"iron.App","boot",0x87b8b725,"iron.App.boot","iron/App.hx",18,0xed6c5204)
namespace iron{

void App_obj::__construct( ::Dynamic _appReady){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_34_new)
HXLINE(  35)		_appReady();
HXLINE(  37)		::kha::System_obj::notifyOnRender(::iron::App_obj::render_dyn(),null());
HXLINE(  38)		::kha::Scheduler_obj::addTimeTask(::iron::App_obj::update_dyn(),(int)0,(((Float)0.016666666666666666) * ::iron::_hx_system::Time_obj::scale),null());
            	}

Dynamic App_obj::__CreateEmpty() { return new App_obj; }

void *App_obj::_hx_vtable = 0;

Dynamic App_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< App_obj > _hx_result = new App_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool App_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00ac17e9;
}

int App_obj::w(){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_9_w)
HXDLIN(   9)		return ::kha::System_obj::windowWidth(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(App_obj,w,return )

int App_obj::h(){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_10_h)
HXDLIN(  10)		return ::kha::System_obj::windowHeight(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(App_obj,h,return )

::Array< ::Dynamic> App_obj::traitInits;

::Array< ::Dynamic> App_obj::traitUpdates;

::Array< ::Dynamic> App_obj::traitLateUpdates;

::Array< ::Dynamic> App_obj::traitRenders;

::Array< ::Dynamic> App_obj::traitRenders2D;

bool App_obj::pauseUpdates;

void App_obj::init( ::Dynamic _appReady){
            	HX_GC_STACKFRAME(&_hx_pos_eb1bef2ea304260d_31_init)
HXDLIN(  31)		 ::iron::App_obj::__alloc( HX_CTX ,_appReady);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,init,(void))

void App_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_41_reset)
HXLINE(  42)		::iron::App_obj::traitInits = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  43)		::iron::App_obj::traitUpdates = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  44)		::iron::App_obj::traitLateUpdates = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  45)		::iron::App_obj::traitRenders = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		::iron::App_obj::traitRenders2D = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  48)		::iron::_hx_system::Input_obj::reset();
HXLINE(  49)		::iron::_hx_system::Tween_obj::reset();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(App_obj,reset,(void))

void App_obj::update(){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_52_update)
HXLINE(  53)		bool _hx_tmp;
HXDLIN(  53)		if (hx::IsNotNull( ::iron::Scene_obj::active )) {
HXLINE(  53)			_hx_tmp = !(::iron::Scene_obj::active->ready);
            		}
            		else {
HXLINE(  53)			_hx_tmp = true;
            		}
HXDLIN(  53)		if (_hx_tmp) {
HXLINE(  53)			return;
            		}
HXLINE(  54)		if (::iron::App_obj::pauseUpdates) {
HXLINE(  54)			return;
            		}
HXLINE(  60)		::iron::_hx_system::Tween_obj::update();
HXLINE(  61)		::iron::_hx_system::Time_obj::update();
HXLINE(  63)		::iron::Scene_obj::active->updateFrame();
HXLINE(  65)		if ((::iron::App_obj::traitInits->length > (int)0)) {
HXLINE(  66)			{
HXLINE(  66)				int _g = (int)0;
HXDLIN(  66)				::Array< ::Dynamic> _g1 = ::iron::App_obj::traitInits;
HXDLIN(  66)				while((_g < _g1->length)){
HXLINE(  66)					 ::Dynamic f = _g1->__get(_g);
HXDLIN(  66)					_g = (_g + (int)1);
HXDLIN(  66)					if ((::iron::App_obj::traitInits->length == (int)0)) {
HXLINE(  66)						goto _hx_goto_5;
            					}
HXDLIN(  66)					f();
            				}
            				_hx_goto_5:;
            			}
HXLINE(  67)			::iron::App_obj::traitInits->removeRange((int)0,::iron::App_obj::traitInits->length);
            		}
HXLINE(  71)		int i = (int)0;
HXLINE(  72)		int l = ::iron::App_obj::traitUpdates->length;
HXLINE(  73)		while((i < l)){
HXLINE(  74)			::iron::App_obj::traitUpdates->__get(i)();
HXLINE(  75)			if ((l <= ::iron::App_obj::traitUpdates->length)) {
HXLINE(  75)				i = (i + (int)1);
            			}
            			else {
HXLINE(  75)				l = ::iron::App_obj::traitUpdates->length;
            			}
            		}
HXLINE(  78)		i = (int)0;
HXLINE(  79)		l = ::iron::App_obj::traitLateUpdates->length;
HXLINE(  80)		while((i < l)){
HXLINE(  81)			::iron::App_obj::traitLateUpdates->__get(i)();
HXLINE(  82)			if ((l <= ::iron::App_obj::traitLateUpdates->length)) {
HXLINE(  82)				i = (i + (int)1);
            			}
            			else {
HXLINE(  82)				l = ::iron::App_obj::traitLateUpdates->length;
            			}
            		}
HXLINE(  85)		::iron::_hx_system::Input_obj::endFrame();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(App_obj,update,(void))

void App_obj::render( ::kha::Framebuffer frame){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_105_render)
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		if (hx::IsNotNull( ::iron::Scene_obj::active )) {
HXLINE( 106)			_hx_tmp = !(::iron::Scene_obj::active->ready);
            		}
            		else {
HXLINE( 106)			_hx_tmp = true;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 107)			::iron::App_obj::render2D(frame);
HXLINE( 108)			return;
            		}
HXLINE( 115)		if ((::iron::App_obj::traitInits->length > (int)0)) {
HXLINE( 116)			{
HXLINE( 116)				int _g = (int)0;
HXDLIN( 116)				::Array< ::Dynamic> _g1 = ::iron::App_obj::traitInits;
HXDLIN( 116)				while((_g < _g1->length)){
HXLINE( 116)					 ::Dynamic f = _g1->__get(_g);
HXDLIN( 116)					_g = (_g + (int)1);
HXDLIN( 116)					if ((::iron::App_obj::traitInits->length == (int)0)) {
HXLINE( 116)						goto _hx_goto_9;
            					}
HXDLIN( 116)					f();
            				}
            				_hx_goto_9:;
            			}
HXLINE( 117)			::iron::App_obj::traitInits->removeRange((int)0,::iron::App_obj::traitInits->length);
            		}
HXLINE( 120)		 ::iron::Scene _hx_tmp1 = ::iron::Scene_obj::active;
HXDLIN( 120)		_hx_tmp1->renderFrame(frame->get_g4());
HXLINE( 122)		{
HXLINE( 122)			int _g2 = (int)0;
HXDLIN( 122)			::Array< ::Dynamic> _g11 = ::iron::App_obj::traitRenders;
HXDLIN( 122)			while((_g2 < _g11->length)){
HXLINE( 122)				 ::Dynamic f1 = _g11->__get(_g2);
HXDLIN( 122)				_g2 = (_g2 + (int)1);
HXDLIN( 122)				if ((::iron::App_obj::traitRenders->length == (int)0)) {
HXLINE( 122)					goto _hx_goto_10;
            				}
HXDLIN( 122)				f1(frame->get_g4());
            			}
            			_hx_goto_10:;
            		}
HXLINE( 124)		::iron::App_obj::render2D(frame);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,render,(void))

void App_obj::render2D( ::kha::Framebuffer frame){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_132_render2D)
HXDLIN( 132)		if ((::iron::App_obj::traitRenders2D->length > (int)0)) {
HXLINE( 133)			frame->get_g2()->begin(false,null());
HXLINE( 134)			{
HXLINE( 134)				int _g = (int)0;
HXDLIN( 134)				::Array< ::Dynamic> _g1 = ::iron::App_obj::traitRenders2D;
HXDLIN( 134)				while((_g < _g1->length)){
HXLINE( 134)					 ::Dynamic f = _g1->__get(_g);
HXDLIN( 134)					_g = (_g + (int)1);
HXDLIN( 134)					if ((::iron::App_obj::traitRenders2D->length == (int)0)) {
HXLINE( 134)						goto _hx_goto_12;
            					}
HXDLIN( 134)					f(frame->get_g2());
            				}
            				_hx_goto_12:;
            			}
HXLINE( 135)			frame->get_g2()->end();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,render2D,(void))

void App_obj::notifyOnInit( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_141_notifyOnInit)
HXDLIN( 141)		::iron::App_obj::traitInits->push(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,notifyOnInit,(void))

void App_obj::removeInit( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_145_removeInit)
HXDLIN( 145)		::iron::App_obj::traitInits->remove(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,removeInit,(void))

void App_obj::notifyOnUpdate( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_149_notifyOnUpdate)
HXDLIN( 149)		::iron::App_obj::traitUpdates->push(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,notifyOnUpdate,(void))

void App_obj::removeUpdate( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_153_removeUpdate)
HXDLIN( 153)		::iron::App_obj::traitUpdates->remove(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,removeUpdate,(void))

void App_obj::notifyOnLateUpdate( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_157_notifyOnLateUpdate)
HXDLIN( 157)		::iron::App_obj::traitLateUpdates->push(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,notifyOnLateUpdate,(void))

void App_obj::removeLateUpdate( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_161_removeLateUpdate)
HXDLIN( 161)		::iron::App_obj::traitLateUpdates->remove(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,removeLateUpdate,(void))

void App_obj::notifyOnRender( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_165_notifyOnRender)
HXDLIN( 165)		::iron::App_obj::traitRenders->push(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,notifyOnRender,(void))

void App_obj::removeRender( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_169_removeRender)
HXDLIN( 169)		::iron::App_obj::traitRenders->remove(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,removeRender,(void))

void App_obj::notifyOnRender2D( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_173_notifyOnRender2D)
HXDLIN( 173)		::iron::App_obj::traitRenders2D->push(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,notifyOnRender2D,(void))

void App_obj::removeRender2D( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_177_removeRender2D)
HXDLIN( 177)		::iron::App_obj::traitRenders2D->remove(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,removeRender2D,(void))


hx::ObjectPtr< App_obj > App_obj::__new( ::Dynamic _appReady) {
	hx::ObjectPtr< App_obj > __this = new App_obj();
	__this->__construct(_appReady);
	return __this;
}

hx::ObjectPtr< App_obj > App_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic _appReady) {
	App_obj *__this = (App_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(App_obj), false, "iron.App"));
	*(void **)__this = App_obj::_hx_vtable;
	__this->__construct(_appReady);
	return __this;
}

App_obj::App_obj()
{
}

bool App_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { outValue = w_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"h") ) { outValue = h_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"render2D") ) { outValue = render2D_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"traitInits") ) { outValue = ( traitInits ); return true; }
		if (HX_FIELD_EQ(inName,"removeInit") ) { outValue = removeInit_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"traitUpdates") ) { outValue = ( traitUpdates ); return true; }
		if (HX_FIELD_EQ(inName,"traitRenders") ) { outValue = ( traitRenders ); return true; }
		if (HX_FIELD_EQ(inName,"pauseUpdates") ) { outValue = ( pauseUpdates ); return true; }
		if (HX_FIELD_EQ(inName,"notifyOnInit") ) { outValue = notifyOnInit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeUpdate") ) { outValue = removeUpdate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeRender") ) { outValue = removeRender_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"traitRenders2D") ) { outValue = ( traitRenders2D ); return true; }
		if (HX_FIELD_EQ(inName,"notifyOnUpdate") ) { outValue = notifyOnUpdate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"notifyOnRender") ) { outValue = notifyOnRender_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeRender2D") ) { outValue = removeRender2D_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"traitLateUpdates") ) { outValue = ( traitLateUpdates ); return true; }
		if (HX_FIELD_EQ(inName,"removeLateUpdate") ) { outValue = removeLateUpdate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"notifyOnRender2D") ) { outValue = notifyOnRender2D_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"notifyOnLateUpdate") ) { outValue = notifyOnLateUpdate_dyn(); return true; }
	}
	return false;
}

bool App_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"traitInits") ) { traitInits=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"traitUpdates") ) { traitUpdates=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"traitRenders") ) { traitRenders=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"pauseUpdates") ) { pauseUpdates=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"traitRenders2D") ) { traitRenders2D=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"traitLateUpdates") ) { traitLateUpdates=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *App_obj_sMemberStorageInfo = 0;
static hx::StaticInfo App_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &App_obj::traitInits,HX_HCSTRING("traitInits","\xb5","\xc4","\x55","\x7e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &App_obj::traitUpdates,HX_HCSTRING("traitUpdates","\x1c","\x8c","\x01","\xe5")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &App_obj::traitLateUpdates,HX_HCSTRING("traitLateUpdates","\x96","\x4a","\xe8","\x73")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &App_obj::traitRenders,HX_HCSTRING("traitRenders","\x2f","\x4a","\x46","\xc6")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &App_obj::traitRenders2D,HX_HCSTRING("traitRenders2D","\xc1","\x9f","\x10","\x9c")},
	{hx::fsBool,(void *) &App_obj::pauseUpdates,HX_HCSTRING("pauseUpdates","\xf4","\x7d","\x89","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void App_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(App_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(App_obj::traitInits,"traitInits");
	HX_MARK_MEMBER_NAME(App_obj::traitUpdates,"traitUpdates");
	HX_MARK_MEMBER_NAME(App_obj::traitLateUpdates,"traitLateUpdates");
	HX_MARK_MEMBER_NAME(App_obj::traitRenders,"traitRenders");
	HX_MARK_MEMBER_NAME(App_obj::traitRenders2D,"traitRenders2D");
	HX_MARK_MEMBER_NAME(App_obj::pauseUpdates,"pauseUpdates");
};

#ifdef HXCPP_VISIT_ALLOCS
static void App_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(App_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(App_obj::traitInits,"traitInits");
	HX_VISIT_MEMBER_NAME(App_obj::traitUpdates,"traitUpdates");
	HX_VISIT_MEMBER_NAME(App_obj::traitLateUpdates,"traitLateUpdates");
	HX_VISIT_MEMBER_NAME(App_obj::traitRenders,"traitRenders");
	HX_VISIT_MEMBER_NAME(App_obj::traitRenders2D,"traitRenders2D");
	HX_VISIT_MEMBER_NAME(App_obj::pauseUpdates,"pauseUpdates");
};

#endif

hx::Class App_obj::__mClass;

static ::String App_obj_sStaticFields[] = {
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("traitInits","\xb5","\xc4","\x55","\x7e"),
	HX_HCSTRING("traitUpdates","\x1c","\x8c","\x01","\xe5"),
	HX_HCSTRING("traitLateUpdates","\x96","\x4a","\xe8","\x73"),
	HX_HCSTRING("traitRenders","\x2f","\x4a","\x46","\xc6"),
	HX_HCSTRING("traitRenders2D","\xc1","\x9f","\x10","\x9c"),
	HX_HCSTRING("pauseUpdates","\xf4","\x7d","\x89","\x38"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("render2D","\xa8","\x98","\xdb","\xb2"),
	HX_HCSTRING("notifyOnInit","\x78","\x4f","\x0c","\x56"),
	HX_HCSTRING("removeInit","\x74","\x75","\xda","\xc2"),
	HX_HCSTRING("notifyOnUpdate","\x71","\x84","\x12","\x1d"),
	HX_HCSTRING("removeUpdate","\x6d","\x21","\x33","\xf6"),
	HX_HCSTRING("notifyOnLateUpdate","\x37","\x38","\x61","\x50"),
	HX_HCSTRING("removeLateUpdate","\x33","\x03","\xfa","\xd4"),
	HX_HCSTRING("notifyOnRender","\xbe","\x69","\x36","\x9b"),
	HX_HCSTRING("removeRender","\xba","\x06","\x57","\x74"),
	HX_HCSTRING("notifyOnRender2D","\x10","\x01","\xf3","\xa4"),
	HX_HCSTRING("removeRender2D","\x0c","\xd5","\x31","\x7d"),
	::String(null())
};

void App_obj::__register()
{
	hx::Object *dummy = new App_obj;
	App_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.App","\x5b","\x12","\x8a","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &App_obj::__GetStatic;
	__mClass->mSetStaticField = &App_obj::__SetStatic;
	__mClass->mMarkFunc = App_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(App_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< App_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = App_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = App_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = App_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void App_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_13_boot)
HXDLIN(  13)		traitInits = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_14_boot)
HXDLIN(  14)		traitUpdates = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_15_boot)
HXDLIN(  15)		traitLateUpdates = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_16_boot)
HXDLIN(  16)		traitRenders = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_17_boot)
HXDLIN(  17)		traitRenders2D = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb1bef2ea304260d_18_boot)
HXDLIN(  18)		pauseUpdates = false;
            	}
}

} // end namespace iron
