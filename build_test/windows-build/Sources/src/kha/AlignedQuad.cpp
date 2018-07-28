// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_AlignedQuad
#include <kha/AlignedQuad.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_26390ef81ec94f5e_10_new,"kha.AlignedQuad","new",0x3c073353,"kha.AlignedQuad.new","kha/Kravur.hx",10,0xdd7a3f9a)
namespace kha{

void AlignedQuad_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_26390ef81ec94f5e_10_new)
            	}

Dynamic AlignedQuad_obj::__CreateEmpty() { return new AlignedQuad_obj; }

void *AlignedQuad_obj::_hx_vtable = 0;

Dynamic AlignedQuad_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AlignedQuad_obj > _hx_result = new AlignedQuad_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AlignedQuad_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e29b4f3;
}


AlignedQuad_obj::AlignedQuad_obj()
{
}

hx::Val AlignedQuad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return hx::Val( x0 ); }
		if (HX_FIELD_EQ(inName,"y0") ) { return hx::Val( y0 ); }
		if (HX_FIELD_EQ(inName,"s0") ) { return hx::Val( s0 ); }
		if (HX_FIELD_EQ(inName,"t0") ) { return hx::Val( t0 ); }
		if (HX_FIELD_EQ(inName,"x1") ) { return hx::Val( x1 ); }
		if (HX_FIELD_EQ(inName,"y1") ) { return hx::Val( y1 ); }
		if (HX_FIELD_EQ(inName,"s1") ) { return hx::Val( s1 ); }
		if (HX_FIELD_EQ(inName,"t1") ) { return hx::Val( t1 ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return hx::Val( xadvance ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AlignedQuad_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s0") ) { s0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t0") ) { t0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t1") ) { t1=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AlignedQuad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y0","\x97","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("s0","\x5d","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("t0","\x3c","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("t1","\x3d","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AlignedQuad_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,x0),HX_HCSTRING("x0","\xb8","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,y0),HX_HCSTRING("y0","\x97","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,s0),HX_HCSTRING("s0","\x5d","\x64","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,t0),HX_HCSTRING("t0","\x3c","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,s1),HX_HCSTRING("s1","\x5e","\x64","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,t1),HX_HCSTRING("t1","\x3d","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(AlignedQuad_obj,xadvance),HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AlignedQuad_obj_sStaticStorageInfo = 0;
#endif

static ::String AlignedQuad_obj_sMemberFields[] = {
	HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"),
	HX_HCSTRING("y0","\x97","\x69","\x00","\x00"),
	HX_HCSTRING("s0","\x5d","\x64","\x00","\x00"),
	HX_HCSTRING("t0","\x3c","\x65","\x00","\x00"),
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"),
	HX_HCSTRING("t1","\x3d","\x65","\x00","\x00"),
	HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"),
	::String(null()) };

static void AlignedQuad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AlignedQuad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AlignedQuad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AlignedQuad_obj::__mClass,"__mClass");
};

#endif

hx::Class AlignedQuad_obj::__mClass;

void AlignedQuad_obj::__register()
{
	hx::Object *dummy = new AlignedQuad_obj;
	AlignedQuad_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.AlignedQuad","\xe1","\x8d","\x58","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AlignedQuad_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AlignedQuad_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AlignedQuad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AlignedQuad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AlignedQuad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AlignedQuad_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
