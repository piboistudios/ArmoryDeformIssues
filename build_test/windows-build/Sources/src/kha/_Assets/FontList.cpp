// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha__Assets_FontList
#include <kha/_Assets/FontList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a5b61adc637a5b1_198_new,"kha._Assets.FontList","new",0x50cce395,"kha._Assets.FontList.new","kha/internal/AssetsBuilder.hx",198,0x6901246d)
HX_LOCAL_STACK_FRAME(_hx_pos_472b3f8c48477a9c_52_get,"kha._Assets.FontList","get",0x50c793cb,"kha._Assets.FontList.get","kha/Assets.hx",52,0x66f27110)
namespace kha{
namespace _Assets{

void FontList_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4a5b61adc637a5b1_198_new)
HXDLIN( 198)		this->names = ::Array_obj< ::String >::__new(0);
            	}

Dynamic FontList_obj::__CreateEmpty() { return new FontList_obj; }

void *FontList_obj::_hx_vtable = 0;

Dynamic FontList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontList_obj > _hx_result = new FontList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0cc63163;
}

 ::kha::Kravur FontList_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_472b3f8c48477a9c_52_get)
HXDLIN(  52)		return ( ( ::kha::Kravur)(::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontList_obj,get,return )


hx::ObjectPtr< FontList_obj > FontList_obj::__new() {
	hx::ObjectPtr< FontList_obj > __this = new FontList_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FontList_obj > FontList_obj::__alloc(hx::Ctx *_hx_ctx) {
	FontList_obj *__this = (FontList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FontList_obj), true, "kha._Assets.FontList"));
	*(void **)__this = FontList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FontList_obj::FontList_obj()
{
}

void FontList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontList);
	HX_MARK_MEMBER_NAME(names,"names");
	HX_MARK_END_CLASS();
}

void FontList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(names,"names");
}

hx::Val FontList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return hx::Val( names ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FontList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { names=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FontList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("names","\xc8","\x8f","\x84","\x96"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FontList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FontList_obj,names),HX_HCSTRING("names","\xc8","\x8f","\x84","\x96")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FontList_obj_sStaticStorageInfo = 0;
#endif

static ::String FontList_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("names","\xc8","\x8f","\x84","\x96"),
	::String(null()) };

static void FontList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontList_obj::__mClass,"__mClass");
};

#endif

hx::Class FontList_obj::__mClass;

void FontList_obj::__register()
{
	hx::Object *dummy = new FontList_obj;
	FontList_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha._Assets.FontList","\x23","\x75","\x2c","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FontList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FontList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace _Assets
