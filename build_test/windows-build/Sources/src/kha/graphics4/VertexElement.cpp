// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <kha/graphics4/VertexElement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_852acc89e80f4237_7_new,"kha.graphics4.VertexElement","new",0x72dc589b,"kha.graphics4.VertexElement.new","kha/graphics4/VertexElement.hx",7,0x02fd8277)
namespace kha{
namespace graphics4{

void VertexElement_obj::__construct(::String name, ::kha::graphics4::VertexData data){
            	HX_STACKFRAME(&_hx_pos_852acc89e80f4237_7_new)
HXLINE(   8)		this->name = name;
HXLINE(   9)		this->data = data;
            	}

Dynamic VertexElement_obj::__CreateEmpty() { return new VertexElement_obj; }

void *VertexElement_obj::_hx_vtable = 0;

Dynamic VertexElement_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VertexElement_obj > _hx_result = new VertexElement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VertexElement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d90c9d3;
}


hx::ObjectPtr< VertexElement_obj > VertexElement_obj::__new(::String name, ::kha::graphics4::VertexData data) {
	hx::ObjectPtr< VertexElement_obj > __this = new VertexElement_obj();
	__this->__construct(name,data);
	return __this;
}

hx::ObjectPtr< VertexElement_obj > VertexElement_obj::__alloc(hx::Ctx *_hx_ctx,::String name, ::kha::graphics4::VertexData data) {
	VertexElement_obj *__this = (VertexElement_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VertexElement_obj), true, "kha.graphics4.VertexElement"));
	*(void **)__this = VertexElement_obj::_hx_vtable;
	__this->__construct(name,data);
	return __this;
}

VertexElement_obj::VertexElement_obj()
{
}

void VertexElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexElement);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void VertexElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(data,"data");
}

hx::Val VertexElement_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VertexElement_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::kha::graphics4::VertexData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VertexElement_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(VertexElement_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::kha::graphics4::VertexData*/ ,(int)offsetof(VertexElement_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VertexElement_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexElement_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	::String(null()) };

static void VertexElement_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexElement_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VertexElement_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexElement_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexElement_obj::__mClass;

void VertexElement_obj::__register()
{
	hx::Object *dummy = new VertexElement_obj;
	VertexElement_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.VertexElement","\x29","\x6f","\xcf","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VertexElement_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VertexElement_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexElement_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VertexElement_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexElement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexElement_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
