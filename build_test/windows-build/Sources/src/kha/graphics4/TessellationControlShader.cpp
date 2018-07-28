// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics4_TessellationControlShader
#include <kha/graphics4/TessellationControlShader.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60d696f5e89e902d_20_new,"kha.graphics4.TessellationControlShader","new",0x89f4f8c4,"kha.graphics4.TessellationControlShader.new","kha/graphics4/TessellationControlShader.hx",20,0x0b6cb56e)
HX_LOCAL_STACK_FRAME(_hx_pos_60d696f5e89e902d_24_init,"kha.graphics4.TessellationControlShader","init",0x291d6a2c,"kha.graphics4.TessellationControlShader.init","kha/graphics4/TessellationControlShader.hx",24,0x0b6cb56e)
HX_LOCAL_STACK_FRAME(_hx_pos_60d696f5e89e902d_28_delete,"kha.graphics4.TessellationControlShader","delete",0x8e79ee47,"kha.graphics4.TessellationControlShader.delete","kha/graphics4/TessellationControlShader.hx",28,0x0b6cb56e)

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

namespace kha{
namespace graphics4{

void TessellationControlShader_obj::__construct(::Array< ::Dynamic> sources,::Array< ::String > files){
            	HX_STACKFRAME(&_hx_pos_60d696f5e89e902d_20_new)
HXDLIN(  20)		this->init(sources->__get((int)0).StaticCast<  ::kha::internal::BytesBlob >(),files->__get((int)0));
            	}

Dynamic TessellationControlShader_obj::__CreateEmpty() { return new TessellationControlShader_obj; }

void *TessellationControlShader_obj::_hx_vtable = 0;

Dynamic TessellationControlShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TessellationControlShader_obj > _hx_result = new TessellationControlShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TessellationControlShader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x318c387c;
}

void TessellationControlShader_obj::init( ::kha::internal::BytesBlob source,::String file){
            	HX_STACKFRAME(&_hx_pos_60d696f5e89e902d_24_init)
HXDLIN(  24)		shader = new Kore::Graphics4::Shader(source->bytes->b->Pointer(), source->get_length(), Kore::Graphics4::TessellationControlShader);;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TessellationControlShader_obj,init,(void))

void TessellationControlShader_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_60d696f5e89e902d_28_delete)
HXDLIN(  28)		delete shader; shader = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TessellationControlShader_obj,_hx_delete,(void))


hx::ObjectPtr< TessellationControlShader_obj > TessellationControlShader_obj::__new(::Array< ::Dynamic> sources,::Array< ::String > files) {
	hx::ObjectPtr< TessellationControlShader_obj > __this = new TessellationControlShader_obj();
	__this->__construct(sources,files);
	return __this;
}

hx::ObjectPtr< TessellationControlShader_obj > TessellationControlShader_obj::__alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources,::Array< ::String > files) {
	TessellationControlShader_obj *__this = (TessellationControlShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TessellationControlShader_obj), false, "kha.graphics4.TessellationControlShader"));
	*(void **)__this = TessellationControlShader_obj::_hx_vtable;
	__this->__construct(sources,files);
	return __this;
}

TessellationControlShader_obj::TessellationControlShader_obj()
{
}

hx::Val TessellationControlShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TessellationControlShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TessellationControlShader_obj_sStaticStorageInfo = 0;
#endif

static ::String TessellationControlShader_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	::String(null()) };

static void TessellationControlShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TessellationControlShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TessellationControlShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TessellationControlShader_obj::__mClass,"__mClass");
};

#endif

hx::Class TessellationControlShader_obj::__mClass;

void TessellationControlShader_obj::__register()
{
	hx::Object *dummy = new TessellationControlShader_obj;
	TessellationControlShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.TessellationControlShader","\xd2","\x86","\x58","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TessellationControlShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TessellationControlShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TessellationControlShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TessellationControlShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TessellationControlShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TessellationControlShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
