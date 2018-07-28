// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ef3bfb9a1f670aa9_32_new,"haxe.crypto.Adler32","new",0xc900c8e2,"haxe.crypto.Adler32.new","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/crypto/Adler32.hx",32,0x729b8146)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3bfb9a1f670aa9_41_update,"haxe.crypto.Adler32","update",0xb4b14ac7,"haxe.crypto.Adler32.update","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/crypto/Adler32.hx",41,0x729b8146)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3bfb9a1f670aa9_53_equals,"haxe.crypto.Adler32","equals",0xed9eb2fd,"haxe.crypto.Adler32.equals","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/crypto/Adler32.hx",53,0x729b8146)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3bfb9a1f670aa9_60_read,"haxe.crypto.Adler32","read",0x1a53c494,"haxe.crypto.Adler32.read","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/crypto/Adler32.hx",60,0x729b8146)
namespace haxe{
namespace crypto{

void Adler32_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ef3bfb9a1f670aa9_32_new)
HXLINE(  33)		this->a1 = (int)1;
HXLINE(  34)		this->a2 = (int)0;
            	}

Dynamic Adler32_obj::__CreateEmpty() { return new Adler32_obj; }

void *Adler32_obj::_hx_vtable = 0;

Dynamic Adler32_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Adler32_obj > _hx_result = new Adler32_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Adler32_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f124546;
}

void Adler32_obj::update( ::haxe::io::Bytes b,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_ef3bfb9a1f670aa9_41_update)
HXLINE(  42)		int a1 = this->a1;
HXDLIN(  42)		int a2 = this->a2;
HXLINE(  43)		{
HXLINE(  43)			int _g1 = pos;
HXDLIN(  43)			int _g = (pos + len);
HXDLIN(  43)			while((_g1 < _g)){
HXLINE(  43)				_g1 = (_g1 + (int)1);
HXDLIN(  43)				int p = (_g1 - (int)1);
HXLINE(  44)				int c = b->b->__get(p);
HXLINE(  45)				a1 = hx::Mod((a1 + c),(int)65521);
HXLINE(  46)				a2 = hx::Mod((a2 + a1),(int)65521);
            			}
            		}
HXLINE(  48)		this->a1 = a1;
HXLINE(  49)		this->a2 = a2;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Adler32_obj,update,(void))

bool Adler32_obj::equals( ::haxe::crypto::Adler32 a){
            	HX_STACKFRAME(&_hx_pos_ef3bfb9a1f670aa9_53_equals)
HXDLIN(  53)		if ((a->a1 == this->a1)) {
HXDLIN(  53)			return (a->a2 == this->a2);
            		}
            		else {
HXDLIN(  53)			return false;
            		}
HXDLIN(  53)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,equals,return )

 ::haxe::crypto::Adler32 Adler32_obj::read( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_ef3bfb9a1f670aa9_60_read)
HXLINE(  61)		 ::haxe::crypto::Adler32 a =  ::haxe::crypto::Adler32_obj::__alloc( HX_CTX );
HXLINE(  62)		int a2a = i->readByte();
HXLINE(  63)		int a2b = i->readByte();
HXLINE(  64)		int a1a = i->readByte();
HXLINE(  65)		int a1b = i->readByte();
HXLINE(  66)		a->a1 = ((int)((int)a1a << (int)(int)8) | (int)a1b);
HXLINE(  67)		a->a2 = ((int)((int)a2a << (int)(int)8) | (int)a2b);
HXLINE(  68)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,read,return )


hx::ObjectPtr< Adler32_obj > Adler32_obj::__new() {
	hx::ObjectPtr< Adler32_obj > __this = new Adler32_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Adler32_obj > Adler32_obj::__alloc(hx::Ctx *_hx_ctx) {
	Adler32_obj *__this = (Adler32_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Adler32_obj), false, "haxe.crypto.Adler32"));
	*(void **)__this = Adler32_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Adler32_obj::Adler32_obj()
{
}

hx::Val Adler32_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { return hx::Val( a1 ); }
		if (HX_FIELD_EQ(inName,"a2") ) { return hx::Val( a2 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Adler32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true; }
	}
	return false;
}

hx::Val Adler32_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { a1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2") ) { a2=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Adler32_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a1","\xb0","\x54","\x00","\x00"));
	outFields->push(HX_HCSTRING("a2","\xb1","\x54","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Adler32_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Adler32_obj,a1),HX_HCSTRING("a1","\xb0","\x54","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Adler32_obj,a2),HX_HCSTRING("a2","\xb1","\x54","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Adler32_obj_sStaticStorageInfo = 0;
#endif

static ::String Adler32_obj_sMemberFields[] = {
	HX_HCSTRING("a1","\xb0","\x54","\x00","\x00"),
	HX_HCSTRING("a2","\xb1","\x54","\x00","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	::String(null()) };

static void Adler32_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Adler32_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Adler32_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Adler32_obj::__mClass,"__mClass");
};

#endif

hx::Class Adler32_obj::__mClass;

static ::String Adler32_obj_sStaticFields[] = {
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null())
};

void Adler32_obj::__register()
{
	hx::Object *dummy = new Adler32_obj;
	Adler32_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Adler32","\xf0","\x6f","\xb6","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Adler32_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Adler32_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Adler32_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Adler32_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Adler32_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Adler32_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Adler32_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Adler32_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
