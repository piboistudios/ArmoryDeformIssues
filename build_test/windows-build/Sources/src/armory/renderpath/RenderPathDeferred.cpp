// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_armory_renderpath_Inc
#include <armory/renderpath/Inc.h>
#endif
#ifndef INCLUDED_armory_renderpath_RenderPathCreator
#include <armory/renderpath/RenderPathCreator.h>
#endif
#ifndef INCLUDED_armory_renderpath_RenderPathDeferred
#include <armory/renderpath/RenderPathDeferred.h>
#endif
#ifndef INCLUDED_iron_RenderPath
#include <iron/RenderPath.h>
#endif
#ifndef INCLUDED_iron_RenderTarget
#include <iron/RenderTarget.h>
#endif
#ifndef INCLUDED_iron_RenderTargetRaw
#include <iron/RenderTargetRaw.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_object_LampObject
#include <iron/object/LampObject.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5b84b7a195865fa2_16_init,"armory.renderpath.RenderPathDeferred","init",0x7d8a92e5,"armory.renderpath.RenderPathDeferred.init","armory/renderpath/RenderPathDeferred.hx",16,0xbc369205)
HX_LOCAL_STACK_FRAME(_hx_pos_5b84b7a195865fa2_383_commands,"armory.renderpath.RenderPathDeferred","commands",0x0a76171d,"armory.renderpath.RenderPathDeferred.commands","armory/renderpath/RenderPathDeferred.hx",383,0xbc369205)
static const ::String _hx_array_data_ca8e18b9_3[] = {
	HX_("gbuffer1",aa,8d,dc,b4),
};
namespace armory{
namespace renderpath{

void RenderPathDeferred_obj::__construct() { }

Dynamic RenderPathDeferred_obj::__CreateEmpty() { return new RenderPathDeferred_obj; }

void *RenderPathDeferred_obj::_hx_vtable = 0;

Dynamic RenderPathDeferred_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RenderPathDeferred_obj > _hx_result = new RenderPathDeferred_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RenderPathDeferred_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f4f148f;
}

 ::iron::RenderPath RenderPathDeferred_obj::path;

void RenderPathDeferred_obj::init( ::iron::RenderPath _path){
            	HX_GC_STACKFRAME(&_hx_pos_5b84b7a195865fa2_16_init)
HXLINE(  18)		::armory::renderpath::RenderPathDeferred_obj::path = _path;
HXLINE(  26)		::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/world_pass/world_pass",8f,6b,a7,5a));
HXLINE(  32)		::armory::renderpath::Inc_obj::initTranslucency();
HXLINE(  56)		{
HXLINE(  57)			::armory::renderpath::RenderPathDeferred_obj::path->createDepthBuffer(HX_("main",39,38,56,48),HX_("DEPTH24",65,93,1e,ea));
HXLINE(  59)			 ::iron::RenderTargetRaw t =  ::iron::RenderTargetRaw_obj::__alloc( HX_CTX );
HXLINE(  60)			t->name = HX_("tex",e7,5d,58,00);
HXLINE(  61)			t->width = (int)0;
HXLINE(  62)			t->height = (int)0;
HXLINE(  63)			t->displayp = null();
HXLINE(  64)			t->format = HX_("RGBA64",f2,5c,88,d6);
HXLINE(  65)			Float ss = (int)1;
HXLINE(  66)			if ((ss != (int)1)) {
HXLINE(  66)				t->scale = ss;
            			}
HXLINE(  67)			t->depth_buffer = HX_("main",39,38,56,48);
HXLINE(  71)			::armory::renderpath::RenderPathDeferred_obj::path->createRenderTarget(t);
            		}
HXLINE(  78)		{
HXLINE(  79)			 ::iron::RenderTargetRaw t1 =  ::iron::RenderTargetRaw_obj::__alloc( HX_CTX );
HXLINE(  80)			t1->name = HX_("buf",33,c3,4a,00);
HXLINE(  81)			t1->width = (int)0;
HXLINE(  82)			t1->height = (int)0;
HXLINE(  83)			t1->displayp = null();
HXLINE(  84)			t1->format = HX_("RGBA64",f2,5c,88,d6);
HXLINE(  85)			Float ss1 = (int)1;
HXLINE(  86)			if ((ss1 != (int)1)) {
HXLINE(  86)				t1->scale = ss1;
            			}
HXLINE(  87)			::armory::renderpath::RenderPathDeferred_obj::path->createRenderTarget(t1);
            		}
HXLINE(  90)		{
HXLINE(  91)			::armory::renderpath::RenderPathDeferred_obj::path->createDepthBuffer(HX_("main",39,38,56,48),HX_("DEPTH24",65,93,1e,ea));
HXLINE(  93)			 ::iron::RenderTargetRaw t2 =  ::iron::RenderTargetRaw_obj::__alloc( HX_CTX );
HXLINE(  94)			t2->name = HX_("gbuffer0",a9,8d,dc,b4);
HXLINE(  95)			t2->width = (int)0;
HXLINE(  96)			t2->height = (int)0;
HXLINE(  97)			t2->displayp = null();
HXLINE(  98)			t2->format = HX_("RGBA64",f2,5c,88,d6);
HXLINE(  99)			Float ss2 = (int)1;
HXLINE( 100)			if ((ss2 != (int)1)) {
HXLINE( 100)				t2->scale = ss2;
            			}
HXLINE( 101)			t2->depth_buffer = HX_("main",39,38,56,48);
HXLINE( 102)			::armory::renderpath::RenderPathDeferred_obj::path->createRenderTarget(t2);
            		}
HXLINE( 105)		{
HXLINE( 106)			 ::iron::RenderTargetRaw t3 =  ::iron::RenderTargetRaw_obj::__alloc( HX_CTX );
HXLINE( 107)			t3->name = HX_("gbuffer1",aa,8d,dc,b4);
HXLINE( 108)			t3->width = (int)0;
HXLINE( 109)			t3->height = (int)0;
HXLINE( 110)			t3->displayp = null();
HXLINE( 111)			t3->format = HX_("RGBA64",f2,5c,88,d6);
HXLINE( 112)			Float ss3 = (int)1;
HXLINE( 113)			if ((ss3 != (int)1)) {
HXLINE( 113)				t3->scale = ss3;
            			}
HXLINE( 114)			::armory::renderpath::RenderPathDeferred_obj::path->createRenderTarget(t3);
            		}
HXLINE( 143)		::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/deferred_indirect/deferred_indirect",ad,02,e2,e9));
HXLINE( 144)		::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/deferred_light/deferred_light",0f,6b,3e,18));
HXLINE( 145)		::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/deferred_light_quad/deferred_light_quad",f1,2b,35,3d));
HXLINE( 154)		{
HXLINE( 155)			::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/ssao_pass/ssao_pass",15,13,8e,48));
HXLINE( 156)			::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/blur_edge_pass/blur_edge_pass_x",a8,55,c9,cd));
HXLINE( 157)			::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/blur_edge_pass/blur_edge_pass_y",a9,55,c9,cd));
            		}
HXLINE( 162)		{
HXLINE( 163)			 ::iron::RenderTargetRaw t4 =  ::iron::RenderTargetRaw_obj::__alloc( HX_CTX );
HXLINE( 164)			t4->name = HX_("bufa",ce,09,20,41);
HXLINE( 165)			t4->width = (int)0;
HXLINE( 166)			t4->height = (int)0;
HXLINE( 167)			t4->displayp = null();
HXLINE( 168)			t4->format = HX_("RGBA32",53,5a,88,d6);
HXLINE( 169)			Float ss4 = (int)1;
HXLINE( 170)			if ((ss4 != (int)1)) {
HXLINE( 170)				t4->scale = ss4;
            			}
HXLINE( 171)			::armory::renderpath::RenderPathDeferred_obj::path->createRenderTarget(t4);
            		}
HXLINE( 173)		{
HXLINE( 174)			 ::iron::RenderTargetRaw t5 =  ::iron::RenderTargetRaw_obj::__alloc( HX_CTX );
HXLINE( 175)			t5->name = HX_("bufb",cf,09,20,41);
HXLINE( 176)			t5->width = (int)0;
HXLINE( 177)			t5->height = (int)0;
HXLINE( 178)			t5->displayp = null();
HXLINE( 179)			t5->format = HX_("RGBA32",53,5a,88,d6);
HXLINE( 180)			Float ss5 = (int)1;
HXLINE( 181)			if ((ss5 != (int)1)) {
HXLINE( 181)				t5->scale = ss5;
            			}
HXLINE( 182)			::armory::renderpath::RenderPathDeferred_obj::path->createRenderTarget(t5);
            		}
HXLINE( 199)		::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/compositor_pass/compositor_pass",2f,e0,3e,60));
HXLINE( 210)		{
HXLINE( 211)			::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/smaa_edge_detect/smaa_edge_detect",0f,74,7d,57));
HXLINE( 212)			::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/smaa_blend_weight/smaa_blend_weight",a7,66,2e,c3));
HXLINE( 213)			::armory::renderpath::RenderPathDeferred_obj::path->loadShader(HX_("shader_datas/smaa_neighborhood_blend/smaa_neighborhood_blend",1b,8f,29,23));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderPathDeferred_obj,init,(void))

void RenderPathDeferred_obj::commands(){
            	HX_STACKFRAME(&_hx_pos_5b84b7a195865fa2_383_commands)
HXLINE( 399)		::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("gbuffer0",a9,8d,dc,b4),::Array_obj< ::String >::fromData( _hx_array_data_ca8e18b9_3,1),null());
HXLINE( 409)		::armory::renderpath::RenderPathDeferred_obj::path->clearTarget(null(),((Float)1.0));
HXLINE( 413)		::armory::renderpath::RenderPathDeferred_obj::path->drawMeshes(HX_("mesh",ed,49,59,48));
HXLINE( 444)		{
HXLINE( 445)			::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("bufa",ce,09,20,41),null(),null());
HXLINE( 446)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("_main",18,54,67,fb),HX_("gbufferD",bd,8d,dc,b4));
HXLINE( 447)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("gbuffer0",a9,8d,dc,b4),HX_("gbuffer0",a9,8d,dc,b4));
HXLINE( 448)			::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/ssao_pass/ssao_pass",15,13,8e,48));
HXLINE( 450)			::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("bufb",cf,09,20,41),null(),null());
HXLINE( 451)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("bufa",ce,09,20,41),HX_("tex",e7,5d,58,00));
HXLINE( 452)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("gbuffer0",a9,8d,dc,b4),HX_("gbuffer0",a9,8d,dc,b4));
HXLINE( 453)			::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/blur_edge_pass/blur_edge_pass_x",a8,55,c9,cd));
HXLINE( 455)			::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("bufa",ce,09,20,41),null(),null());
HXLINE( 456)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("bufb",cf,09,20,41),HX_("tex",e7,5d,58,00));
HXLINE( 457)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("gbuffer0",a9,8d,dc,b4),HX_("gbuffer0",a9,8d,dc,b4));
HXLINE( 458)			::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/blur_edge_pass/blur_edge_pass_y",a9,55,c9,cd));
            		}
HXLINE( 518)		::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("tex",e7,5d,58,00),null(),null());
HXLINE( 520)		::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("gbuffer0",a9,8d,dc,b4),HX_("gbuffer0",a9,8d,dc,b4));
HXLINE( 521)		::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("gbuffer1",aa,8d,dc,b4),HX_("gbuffer1",aa,8d,dc,b4));
HXLINE( 524)		::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("bufa",ce,09,20,41),HX_("ssaotex",19,29,c4,cc));
HXLINE( 537)		::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/deferred_indirect/deferred_indirect",ad,02,e2,e9));
HXLINE( 540)		::Array< ::Dynamic> lamps = ::iron::Scene_obj::active->lamps;
HXLINE( 544)		{
HXLINE( 544)			int _g1 = (int)0;
HXDLIN( 544)			int _g = lamps->length;
HXDLIN( 544)			while((_g1 < _g)){
HXLINE( 544)				_g1 = (_g1 + (int)1);
HXDLIN( 544)				int i = (_g1 - (int)1);
HXLINE( 545)				 ::iron::object::LampObject l = lamps->__get(i).StaticCast<  ::iron::object::LampObject >();
HXLINE( 546)				if (!(l->visible)) {
HXLINE( 546)					continue;
            				}
HXLINE( 547)				::armory::renderpath::RenderPathDeferred_obj::path->currentLampIndex = i;
HXLINE( 551)				if (::armory::renderpath::RenderPathDeferred_obj::path->lampCastShadow()) {
HXLINE( 552)					::armory::renderpath::Inc_obj::drawShadowMap(l);
            				}
HXLINE( 561)				::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("tex",e7,5d,58,00),null(),null());
HXLINE( 563)				::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("gbuffer0",a9,8d,dc,b4),HX_("gbuffer0",a9,8d,dc,b4));
HXLINE( 564)				::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("gbuffer1",aa,8d,dc,b4),HX_("gbuffer1",aa,8d,dc,b4));
HXLINE( 571)				if (::armory::renderpath::RenderPathDeferred_obj::path->lampCastShadow()) {
HXLINE( 575)					::armory::renderpath::Inc_obj::bindShadowMap();
            				}
HXLINE( 587)				if (::armory::renderpath::RenderPathDeferred_obj::path->lampIsSun()) {
HXLINE( 588)					::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/deferred_light_quad/deferred_light_quad",f1,2b,35,3d));
            				}
            				else {
HXLINE( 591)					::armory::renderpath::RenderPathDeferred_obj::path->drawLampVolume(HX_("shader_datas/deferred_light/deferred_light",0f,6b,3e,18));
            				}
            			}
            		}
HXLINE( 616)		::armory::renderpath::RenderPathDeferred_obj::path->currentLampIndex = (int)0;
HXLINE( 623)		::armory::renderpath::RenderPathDeferred_obj::path->drawSkydome(HX_("shader_datas/world_pass/world_pass",8f,6b,a7,5a));
HXLINE( 642)		{
HXLINE( 643)			bool hasLamp = (::iron::Scene_obj::active->lamps->length > (int)0);
HXLINE( 644)			if (hasLamp) {
HXLINE( 644)				::armory::renderpath::Inc_obj::drawTranslucency(HX_("tex",e7,5d,58,00));
            			}
            		}
HXLINE( 771)		::String framebuffer = HX_("",00,00,00,00);
HXLINE( 780)		{
HXLINE( 781)			::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("buf",33,c3,4a,00),null(),null());
HXLINE( 782)			::armory::renderpath::RenderPathCreator_obj::finalTarget = ::armory::renderpath::RenderPathDeferred_obj::path->currentTarget;
            		}
HXLINE( 786)		::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("tex",e7,5d,58,00),HX_("tex",e7,5d,58,00));
HXLINE( 795)		::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/compositor_pass/compositor_pass",2f,e0,3e,60));
HXLINE( 812)		{
HXLINE( 813)			::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("bufa",ce,09,20,41),null(),null());
HXLINE( 814)			::armory::renderpath::RenderPathDeferred_obj::path->clearTarget((int)0,null());
HXLINE( 815)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("buf",33,c3,4a,00),HX_("colorTex",44,64,f0,89));
HXLINE( 816)			::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/smaa_edge_detect/smaa_edge_detect",0f,74,7d,57));
HXLINE( 818)			::armory::renderpath::RenderPathDeferred_obj::path->setTarget(HX_("bufb",cf,09,20,41),null(),null());
HXLINE( 819)			::armory::renderpath::RenderPathDeferred_obj::path->clearTarget((int)0,null());
HXLINE( 820)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("bufa",ce,09,20,41),HX_("edgesTex",f1,c9,c7,71));
HXLINE( 821)			::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/smaa_blend_weight/smaa_blend_weight",a7,66,2e,c3));
HXLINE( 826)			::armory::renderpath::RenderPathDeferred_obj::path->setTarget(framebuffer,null(),null());
HXLINE( 828)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("buf",33,c3,4a,00),HX_("colorTex",44,64,f0,89));
HXLINE( 829)			::armory::renderpath::RenderPathDeferred_obj::path->bindTarget(HX_("bufb",cf,09,20,41),HX_("blendTex",16,76,d6,6a));
HXLINE( 835)			::armory::renderpath::RenderPathDeferred_obj::path->drawShader(HX_("shader_datas/smaa_neighborhood_blend/smaa_neighborhood_blend",1b,8f,29,23));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderPathDeferred_obj,commands,(void))


RenderPathDeferred_obj::RenderPathDeferred_obj()
{
}

bool RenderPathDeferred_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { outValue = ( path ); return true; }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { outValue = commands_dyn(); return true; }
	}
	return false;
}

bool RenderPathDeferred_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=ioValue.Cast<  ::iron::RenderPath >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RenderPathDeferred_obj_sMemberStorageInfo = 0;
static hx::StaticInfo RenderPathDeferred_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::iron::RenderPath*/ ,(void *) &RenderPathDeferred_obj::path,HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void RenderPathDeferred_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderPathDeferred_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderPathDeferred_obj::path,"path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RenderPathDeferred_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderPathDeferred_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderPathDeferred_obj::path,"path");
};

#endif

hx::Class RenderPathDeferred_obj::__mClass;

static ::String RenderPathDeferred_obj_sStaticFields[] = {
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	::String(null())
};

void RenderPathDeferred_obj::__register()
{
	hx::Object *dummy = new RenderPathDeferred_obj;
	RenderPathDeferred_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.renderpath.RenderPathDeferred","\xb9","\x18","\x8e","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RenderPathDeferred_obj::__GetStatic;
	__mClass->mSetStaticField = &RenderPathDeferred_obj::__SetStatic;
	__mClass->mMarkFunc = RenderPathDeferred_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RenderPathDeferred_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RenderPathDeferred_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RenderPathDeferred_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderPathDeferred_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderPathDeferred_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace renderpath
