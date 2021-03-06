// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_iron_RenderTarget
#include <iron/RenderTarget.h>
#endif
#ifndef INCLUDED_iron_RenderTargetRaw
#include <iron/RenderTargetRaw.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics4_CubeMap
#include <kha/graphics4/CubeMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c15ff6642d61b4ea_774_new,"iron.RenderTarget","new",0xea3ea5bf,"iron.RenderTarget.new","iron/RenderPath.hx",774,0x489fbb1c)
HX_LOCAL_STACK_FRAME(_hx_pos_c15ff6642d61b4ea_784_unload,"iron.RenderTarget","unload",0x13203100,"iron.RenderTarget.unload","iron/RenderPath.hx",784,0x489fbb1c)
namespace iron{

void RenderTarget_obj::__construct( ::iron::RenderTargetRaw raw){
            	HX_STACKFRAME(&_hx_pos_c15ff6642d61b4ea_774_new)
HXLINE( 782)		this->isCubeMap = false;
HXLINE( 781)		this->is3D = false;
HXLINE( 780)		this->hasDepth = false;
HXLINE( 779)		this->cubeMap = null();
HXLINE( 778)		this->image = null();
HXLINE( 777)		this->depthStencilFrom = HX_("",00,00,00,00);
HXLINE( 783)		this->raw = raw;
            	}

Dynamic RenderTarget_obj::__CreateEmpty() { return new RenderTarget_obj; }

void *RenderTarget_obj::_hx_vtable = 0;

Dynamic RenderTarget_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RenderTarget_obj > _hx_result = new RenderTarget_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RenderTarget_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d6a3a4b;
}

void RenderTarget_obj::unload(){
            	HX_STACKFRAME(&_hx_pos_c15ff6642d61b4ea_784_unload)
HXLINE( 785)		if (hx::IsNotNull( this->image )) {
HXLINE( 785)			this->image->unload();
            		}
HXLINE( 786)		if (hx::IsNotNull( this->cubeMap )) {
HXLINE( 786)			this->cubeMap->unload();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderTarget_obj,unload,(void))


hx::ObjectPtr< RenderTarget_obj > RenderTarget_obj::__new( ::iron::RenderTargetRaw raw) {
	hx::ObjectPtr< RenderTarget_obj > __this = new RenderTarget_obj();
	__this->__construct(raw);
	return __this;
}

hx::ObjectPtr< RenderTarget_obj > RenderTarget_obj::__alloc(hx::Ctx *_hx_ctx, ::iron::RenderTargetRaw raw) {
	RenderTarget_obj *__this = (RenderTarget_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RenderTarget_obj), true, "iron.RenderTarget"));
	*(void **)__this = RenderTarget_obj::_hx_vtable;
	__this->__construct(raw);
	return __this;
}

RenderTarget_obj::RenderTarget_obj()
{
}

void RenderTarget_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTarget);
	HX_MARK_MEMBER_NAME(raw,"raw");
	HX_MARK_MEMBER_NAME(depthStencil,"depthStencil");
	HX_MARK_MEMBER_NAME(depthStencilFrom,"depthStencilFrom");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(cubeMap,"cubeMap");
	HX_MARK_MEMBER_NAME(hasDepth,"hasDepth");
	HX_MARK_MEMBER_NAME(is3D,"is3D");
	HX_MARK_MEMBER_NAME(isCubeMap,"isCubeMap");
	HX_MARK_END_CLASS();
}

void RenderTarget_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(raw,"raw");
	HX_VISIT_MEMBER_NAME(depthStencil,"depthStencil");
	HX_VISIT_MEMBER_NAME(depthStencilFrom,"depthStencilFrom");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(cubeMap,"cubeMap");
	HX_VISIT_MEMBER_NAME(hasDepth,"hasDepth");
	HX_VISIT_MEMBER_NAME(is3D,"is3D");
	HX_VISIT_MEMBER_NAME(isCubeMap,"isCubeMap");
}

hx::Val RenderTarget_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { return hx::Val( raw ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"is3D") ) { return hx::Val( is3D ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return hx::Val( image ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { return hx::Val( cubeMap ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasDepth") ) { return hx::Val( hasDepth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isCubeMap") ) { return hx::Val( isCubeMap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"depthStencil") ) { return hx::Val( depthStencil ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthStencilFrom") ) { return hx::Val( depthStencilFrom ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RenderTarget_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { raw=inValue.Cast<  ::iron::RenderTargetRaw >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"is3D") ) { is3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast<  ::kha::Image >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { cubeMap=inValue.Cast<  ::kha::graphics4::CubeMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasDepth") ) { hasDepth=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isCubeMap") ) { isCubeMap=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"depthStencil") ) { depthStencil=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthStencilFrom") ) { depthStencilFrom=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderTarget_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"));
	outFields->push(HX_HCSTRING("depthStencil","\x39","\x6b","\x52","\xc6"));
	outFields->push(HX_HCSTRING("depthStencilFrom","\x43","\xcd","\xd6","\x37"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c"));
	outFields->push(HX_HCSTRING("hasDepth","\x49","\x3b","\x82","\x63"));
	outFields->push(HX_HCSTRING("is3D","\x1b","\xd7","\xbe","\x45"));
	outFields->push(HX_HCSTRING("isCubeMap","\xdd","\xc9","\xce","\x90"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RenderTarget_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::RenderTargetRaw*/ ,(int)offsetof(RenderTarget_obj,raw),HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00")},
	{hx::fsInt,(int)offsetof(RenderTarget_obj,depthStencil),HX_HCSTRING("depthStencil","\x39","\x6b","\x52","\xc6")},
	{hx::fsString,(int)offsetof(RenderTarget_obj,depthStencilFrom),HX_HCSTRING("depthStencilFrom","\x43","\xcd","\xd6","\x37")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(RenderTarget_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::kha::graphics4::CubeMap*/ ,(int)offsetof(RenderTarget_obj,cubeMap),HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c")},
	{hx::fsBool,(int)offsetof(RenderTarget_obj,hasDepth),HX_HCSTRING("hasDepth","\x49","\x3b","\x82","\x63")},
	{hx::fsBool,(int)offsetof(RenderTarget_obj,is3D),HX_HCSTRING("is3D","\x1b","\xd7","\xbe","\x45")},
	{hx::fsBool,(int)offsetof(RenderTarget_obj,isCubeMap),HX_HCSTRING("isCubeMap","\xdd","\xc9","\xce","\x90")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RenderTarget_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderTarget_obj_sMemberFields[] = {
	HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"),
	HX_HCSTRING("depthStencil","\x39","\x6b","\x52","\xc6"),
	HX_HCSTRING("depthStencilFrom","\x43","\xcd","\xd6","\x37"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c"),
	HX_HCSTRING("hasDepth","\x49","\x3b","\x82","\x63"),
	HX_HCSTRING("is3D","\x1b","\xd7","\xbe","\x45"),
	HX_HCSTRING("isCubeMap","\xdd","\xc9","\xce","\x90"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void RenderTarget_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTarget_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RenderTarget_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTarget_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderTarget_obj::__mClass;

void RenderTarget_obj::__register()
{
	hx::Object *dummy = new RenderTarget_obj;
	RenderTarget_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.RenderTarget","\x4d","\x5a","\xf3","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RenderTarget_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RenderTarget_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderTarget_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RenderTarget_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderTarget_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderTarget_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
