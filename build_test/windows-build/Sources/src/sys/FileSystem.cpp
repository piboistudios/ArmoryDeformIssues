// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6e8e8cd2cae45e2_38_stat,"sys.FileSystem","stat",0xa630df16,"sys.FileSystem.stat","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/sys/FileSystem.hx",38,0x506bdfca)
namespace sys{

void FileSystem_obj::__construct() { }

Dynamic FileSystem_obj::__CreateEmpty() { return new FileSystem_obj; }

void *FileSystem_obj::_hx_vtable = 0;

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileSystem_obj > _hx_result = new FileSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x284891f8;
}

 ::Dynamic FileSystem_obj::stat(::String path){
            	HX_STACKFRAME(&_hx_pos_d6e8e8cd2cae45e2_38_stat)
HXLINE(  39)		::String s;
HXDLIN(  39)		bool s1;
HXDLIN(  39)		if (hx::IsEq( path.charCodeAt((int)1),(int)58 )) {
HXLINE(  39)			s1 = (path.length <= (int)3);
            		}
            		else {
HXLINE(  39)			s1 = false;
            		}
HXDLIN(  39)		if (s1) {
HXLINE(  39)			s = ::haxe::io::Path_obj::addTrailingSlash(path);
            		}
            		else {
HXLINE(  39)			s = ::haxe::io::Path_obj::removeTrailingSlashes(path);
            		}
HXDLIN(  39)		 ::Dynamic s2 = _hx_std_sys_stat(s);
HXLINE(  40)		if (hx::IsNull( s2 )) {
HXLINE(  41)			 ::Date _hx_tmp = ::Date_obj::fromTime((int)0);
HXDLIN(  41)			 ::Date _hx_tmp1 = ::Date_obj::fromTime((int)0);
HXDLIN(  41)			return  ::Dynamic(hx::Anon_obj::Create(11)
            				->setFixed(0,HX_("nlink",68,e7,c6,9d),(int)0)
            				->setFixed(1,HX_("dev",d5,39,4c,00),(int)0)
            				->setFixed(2,HX_("gid",02,84,4e,00),(int)0)
            				->setFixed(3,HX_("ino",ea,0c,50,00),(int)0)
            				->setFixed(4,HX_("uid",90,23,59,00),(int)0)
            				->setFixed(5,HX_("mtime",fa,06,aa,0f),_hx_tmp1)
            				->setFixed(6,HX_("atime",ee,10,db,26),_hx_tmp)
            				->setFixed(7,HX_("mode",63,d3,60,48),(int)0)
            				->setFixed(8,HX_("rdev",a3,8c,a6,4b),(int)0)
            				->setFixed(9,HX_("size",c1,a0,53,4c),(int)0)
            				->setFixed(10,HX_("ctime",f0,39,a8,4d),::Date_obj::fromTime((int)0)));
            		}
HXLINE(  42)		s2->__SetField(HX_("atime",ee,10,db,26),::Date_obj::fromTime((((Float)1000.0) * ( (int)(s2->__Field(HX_("atime",ee,10,db,26),hx::paccDynamic)) ))),hx::paccDynamic);
HXLINE(  43)		s2->__SetField(HX_("mtime",fa,06,aa,0f),::Date_obj::fromTime((((Float)1000.0) * ( (int)(s2->__Field(HX_("mtime",fa,06,aa,0f),hx::paccDynamic)) ))),hx::paccDynamic);
HXLINE(  44)		s2->__SetField(HX_("ctime",f0,39,a8,4d),::Date_obj::fromTime((((Float)1000.0) * ( (int)(s2->__Field(HX_("ctime",f0,39,a8,4d),hx::paccDynamic)) ))),hx::paccDynamic);
HXLINE(  45)		return s2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,stat,return )


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stat") ) { outValue = stat_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FileSystem_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FileSystem_obj_sStaticStorageInfo = 0;
#endif

static void FileSystem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileSystem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
};

#endif

hx::Class FileSystem_obj::__mClass;

static ::String FileSystem_obj_sStaticFields[] = {
	HX_HCSTRING("stat","\xd4","\xe3","\x5b","\x4c"),
	::String(null())
};

void FileSystem_obj::__register()
{
	hx::Object *dummy = new FileSystem_obj;
	FileSystem_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.FileSystem","\x6c","\x2c","\xe5","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileSystem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FileSystem_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileSystem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileSystem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileSystem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
