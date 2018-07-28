// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_iron_data_Data
#include <iron/data/Data.h>
#endif
#ifndef INCLUDED_iron_data_ParticleData
#include <iron/data/ParticleData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08dd01268adc2678_10_new,"iron.data.ParticleData","new",0x428c93c0,"iron.data.ParticleData.new","iron/data/ParticleData.hx",10,0xb692b350)
HX_LOCAL_STACK_FRAME(_hx_pos_08dd01268adc2678_20_parse,"iron.data.ParticleData","parse",0x91cdeb93,"iron.data.ParticleData.parse","iron/data/ParticleData.hx",20,0xb692b350)
namespace iron{
namespace data{

void ParticleData_obj::__construct( ::Dynamic raw, ::Dynamic done){
            	HX_STACKFRAME(&_hx_pos_08dd01268adc2678_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  13)		this->raw = raw;
HXLINE(  14)		this->name = ( (::String)(raw->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXLINE(  16)		done(hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic ParticleData_obj::__CreateEmpty() { return new ParticleData_obj; }

void *ParticleData_obj::_hx_vtable = 0;

Dynamic ParticleData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ParticleData_obj > _hx_result = new ParticleData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ParticleData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x18cc8622) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x18cc8622;
	} else {
		return inClassId==(int)0x25e6a720;
	}
}

void ParticleData_obj::parse(::String name,::String id, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,id, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::Dynamic format){
            			HX_GC_STACKFRAME(&_hx_pos_08dd01268adc2678_20_parse)
HXLINE(  21)			 ::Dynamic raw = ::iron::data::Data_obj::getParticleRawByName(( (::Array< ::Dynamic>)(format->__Field(HX_("particle_datas",10,8d,61,11),hx::paccDynamic)) ),id);
HXLINE(  22)			if (hx::IsNull( raw )) {
HXLINE(  23)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  23)				_hx_tmp(((HX_("Particle data \"",26,67,bd,48) + id) + HX_("\" not found!",4a,86,fb,0a)),hx::SourceInfo(HX_("ParticleData.hx",0e,89,97,d2),23,HX_("iron.data.ParticleData",ce,f3,cf,14),HX_("parse",33,90,55,bd)));
HXLINE(  24)				done(null());
            			}
HXLINE(  26)			 ::iron::data::ParticleData_obj::__alloc( HX_CTX ,raw,done);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_08dd01268adc2678_20_parse)
HXDLIN(  20)		::iron::data::Data_obj::getSceneRaw(name, ::Dynamic(new _hx_Closure_0(id,done)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ParticleData_obj,parse,(void))


ParticleData_obj::ParticleData_obj()
{
}

void ParticleData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParticleData);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(raw,"raw");
	HX_MARK_END_CLASS();
}

void ParticleData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(raw,"raw");
}

hx::Val ParticleData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { return hx::Val( raw ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ParticleData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

hx::Val ParticleData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { raw=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParticleData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ParticleData_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ParticleData_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ParticleData_obj,raw),HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ParticleData_obj_sStaticStorageInfo = 0;
#endif

static ::String ParticleData_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"),
	::String(null()) };

static void ParticleData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParticleData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ParticleData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParticleData_obj::__mClass,"__mClass");
};

#endif

hx::Class ParticleData_obj::__mClass;

static ::String ParticleData_obj_sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null())
};

void ParticleData_obj::__register()
{
	hx::Object *dummy = new ParticleData_obj;
	ParticleData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.data.ParticleData","\xce","\xf3","\xcf","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ParticleData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ParticleData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ParticleData_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ParticleData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ParticleData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ParticleData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ParticleData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ParticleData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace data
