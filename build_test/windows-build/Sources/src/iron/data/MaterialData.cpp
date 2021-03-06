// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_iron_data_Data
#include <iron/data/Data.h>
#endif
#ifndef INCLUDED_iron_data_MaterialContext
#include <iron/data/MaterialContext.h>
#endif
#ifndef INCLUDED_iron_data_MaterialData
#include <iron/data/MaterialData.h>
#endif
#ifndef INCLUDED_iron_data_ShaderData
#include <iron/data/ShaderData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_541f1e6235b388d5_37_new,"iron.data.MaterialData","new",0x32677b21,"iron.data.MaterialData.new","iron/data/MaterialData.hx",37,0x327b930f)
static const int _hx_array_data_122956af_3[] = {
	(int)0,
};
HX_DEFINE_STACK_FRAME(_hx_pos_541f1e6235b388d5_48_new,"iron.data.MaterialData","new",0x32677b21,"iron.data.MaterialData.new","iron/data/MaterialData.hx",48,0x327b930f)
HX_DEFINE_STACK_FRAME(_hx_pos_541f1e6235b388d5_8_new,"iron.data.MaterialData","new",0x32677b21,"iron.data.MaterialData.new","iron/data/MaterialData.hx",8,0x327b930f)
HX_LOCAL_STACK_FRAME(_hx_pos_541f1e6235b388d5_68_getContext,"iron.data.MaterialData","getContext",0x8df6bb58,"iron.data.MaterialData.getContext","iron/data/MaterialData.hx",68,0x327b930f)
HX_LOCAL_STACK_FRAME(_hx_pos_541f1e6235b388d5_76_toString,"iron.data.MaterialData","toString",0x77b38a4b,"iron.data.MaterialData.toString","iron/data/MaterialData.hx",76,0x327b930f)
HX_LOCAL_STACK_FRAME(_hx_pos_541f1e6235b388d5_58_parse,"iron.data.MaterialData","parse",0x5bba2d34,"iron.data.MaterialData.parse","iron/data/MaterialData.hx",58,0x327b930f)
HX_LOCAL_STACK_FRAME(_hx_pos_541f1e6235b388d5_10_boot,"iron.data.MaterialData","boot",0xe03d4251,"iron.data.MaterialData.boot","iron/data/MaterialData.hx",10,0x327b930f)
namespace iron{
namespace data{

void MaterialData_obj::__construct( ::Dynamic raw, ::Dynamic done,::String __o_file){
            		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_1, ::iron::data::MaterialData,_gthis, ::Dynamic,raw, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::iron::data::ShaderData b){
            			HX_GC_STACKFRAME(&_hx_pos_541f1e6235b388d5_37_new)
HXLINE(  38)			_gthis->shader = b;
HXLINE(  41)			_gthis->contexts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  43)			while((_gthis->contexts->length < ( (::Array< ::Dynamic>)(raw->__Field(HX_("contexts",a4,9b,2b,2f),hx::paccDynamic)) )->length)){
HXLINE(  43)				_gthis->contexts->push(null());
            			}
HXLINE(  44)			::Array< int > contextsLoaded = ::Array_obj< int >::fromData( _hx_array_data_122956af_3,1);
HXLINE(  46)			{
HXLINE(  46)				int _g1 = (int)0;
HXDLIN(  46)				int _g = ( (::Array< ::Dynamic>)(raw->__Field(HX_("contexts",a4,9b,2b,2f),hx::paccDynamic)) )->length;
HXDLIN(  46)				while((_g1 < _g)){
            					HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_hx_Closure_0, ::iron::data::MaterialData,_gthis, ::Dynamic,raw, ::Dynamic,done,::Array< int >,contextsLoaded,int,i) HXARGC(1)
            					void _hx_run( ::iron::data::MaterialContext self){
            						HX_STACKFRAME(&_hx_pos_541f1e6235b388d5_48_new)
HXLINE(  49)						_gthis->contexts[i] = self;
HXLINE(  50)						contextsLoaded[(int)0]++;
HXLINE(  51)						if ((contextsLoaded->__get((int)0) == ( (::Array< ::Dynamic>)(raw->__Field(HX_("contexts",a4,9b,2b,2f),hx::paccDynamic)) )->length)) {
HXLINE(  51)							done(_gthis);
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  46)					_g1 = (_g1 + (int)1);
HXDLIN(  46)					int i = (_g1 - (int)1);
HXLINE(  47)					 ::Dynamic c =  ::Dynamic(raw->__Field(HX_("contexts",a4,9b,2b,2f),hx::paccDynamic))->__GetItem(i);
HXLINE(  48)					 ::iron::data::MaterialContext_obj::__alloc( HX_CTX ,c, ::Dynamic(new _hx_Closure_0(_gthis,raw,done,contextsLoaded,i)));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

::String file = __o_file.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_541f1e6235b388d5_8_new)
HXLINE(  16)		this->contexts = null();
HXLINE(  18)		 ::iron::data::MaterialData _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  19)		super::__construct();
HXLINE(  21)		this->uid = ++::iron::data::MaterialData_obj::uidCounter;
HXLINE(  22)		this->raw = raw;
HXLINE(  23)		this->name = ( (::String)(raw->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXLINE(  25)		::Array< ::String > ref = ( (::String)(raw->__Field(HX_("shader",25,bf,20,1d),hx::paccDynamic)) ).split(HX_("/",2f,00,00,00));
HXLINE(  26)		::String object_file = HX_("",00,00,00,00);
HXLINE(  27)		::String data_ref = HX_("",00,00,00,00);
HXLINE(  28)		if ((ref->length == (int)2)) {
HXLINE(  29)			object_file = ref->__get((int)0);
HXLINE(  30)			data_ref = ref->__get((int)1);
            		}
            		else {
HXLINE(  33)			object_file = file;
HXLINE(  34)			data_ref = ( (::String)(raw->__Field(HX_("shader",25,bf,20,1d),hx::paccDynamic)) );
            		}
HXLINE(  37)		::iron::data::Data_obj::getShader(object_file,data_ref,raw->__Field(HX_("override_context",bc,3d,f5,b3),hx::paccDynamic), ::Dynamic(new _hx_Closure_1(_gthis,raw,done)));
            	}

Dynamic MaterialData_obj::__CreateEmpty() { return new MaterialData_obj; }

void *MaterialData_obj::_hx_vtable = 0;

Dynamic MaterialData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MaterialData_obj > _hx_result = new MaterialData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MaterialData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1625e903) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1625e903;
	} else {
		return inClassId==(int)0x25e6a720;
	}
}

 ::iron::data::MaterialContext MaterialData_obj::getContext(::String name){
            	HX_STACKFRAME(&_hx_pos_541f1e6235b388d5_68_getContext)
HXLINE(  69)		{
HXLINE(  69)			int _g = (int)0;
HXDLIN(  69)			::Array< ::Dynamic> _g1 = this->contexts;
HXDLIN(  69)			while((_g < _g1->length)){
HXLINE(  69)				 ::iron::data::MaterialContext c = _g1->__get(_g).StaticCast<  ::iron::data::MaterialContext >();
HXDLIN(  69)				_g = (_g + (int)1);
HXLINE(  71)				if ((( (::String)(c->raw->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) ).substr((int)0,name.length) == name)) {
HXLINE(  71)					return c;
            				}
            			}
            		}
HXLINE(  73)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialData_obj,getContext,return )

::String MaterialData_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_541f1e6235b388d5_76_toString)
HXDLIN(  76)		return (HX_("Material ",79,95,de,41) + this->name);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialData_obj,toString,return )

int MaterialData_obj::uidCounter;

void MaterialData_obj::parse(::String file,::String name, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0,::String,name,::String,file, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::Dynamic format){
            			HX_GC_STACKFRAME(&_hx_pos_541f1e6235b388d5_58_parse)
HXLINE(  59)			 ::Dynamic raw = ::iron::data::Data_obj::getMaterialRawByName(( (::Array< ::Dynamic>)(format->__Field(HX_("material_datas",31,2a,02,22),hx::paccDynamic)) ),name);
HXLINE(  60)			if (hx::IsNull( raw )) {
HXLINE(  61)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  61)				_hx_tmp(((HX_("Material data \"",e5,46,a6,c4) + name) + HX_("\" not found!",4a,86,fb,0a)),hx::SourceInfo(HX_("MaterialData.hx",cd,68,80,4e),61,HX_("iron.data.MaterialData",af,56,29,12),HX_("parse",33,90,55,bd)));
HXLINE(  62)				done(null());
            			}
HXLINE(  64)			 ::iron::data::MaterialData_obj::__alloc( HX_CTX ,raw,done,file);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_541f1e6235b388d5_58_parse)
HXDLIN(  58)		::iron::data::Data_obj::getSceneRaw(file, ::Dynamic(new _hx_Closure_0(name,file,done)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MaterialData_obj,parse,(void))


hx::ObjectPtr< MaterialData_obj > MaterialData_obj::__new( ::Dynamic raw, ::Dynamic done,::String __o_file) {
	hx::ObjectPtr< MaterialData_obj > __this = new MaterialData_obj();
	__this->__construct(raw,done,__o_file);
	return __this;
}

hx::ObjectPtr< MaterialData_obj > MaterialData_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic raw, ::Dynamic done,::String __o_file) {
	MaterialData_obj *__this = (MaterialData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MaterialData_obj), true, "iron.data.MaterialData"));
	*(void **)__this = MaterialData_obj::_hx_vtable;
	__this->__construct(raw,done,__o_file);
	return __this;
}

MaterialData_obj::MaterialData_obj()
{
}

void MaterialData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialData);
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(raw,"raw");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(contexts,"contexts");
	HX_MARK_END_CLASS();
}

void MaterialData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(raw,"raw");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(contexts,"contexts");
}

hx::Val MaterialData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uid") ) { return hx::Val( uid ); }
		if (HX_FIELD_EQ(inName,"raw") ) { return hx::Val( raw ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return hx::Val( shader ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contexts") ) { return hx::Val( contexts ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getContext") ) { return hx::Val( getContext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MaterialData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uidCounter") ) { outValue = ( uidCounter ); return true; }
	}
	return false;
}

hx::Val MaterialData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"raw") ) { raw=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::iron::data::ShaderData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contexts") ) { contexts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MaterialData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"uidCounter") ) { uidCounter=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void MaterialData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uid","\x90","\x23","\x59","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("contexts","\xa4","\x9b","\x2b","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MaterialData_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(MaterialData_obj,uid),HX_HCSTRING("uid","\x90","\x23","\x59","\x00")},
	{hx::fsString,(int)offsetof(MaterialData_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MaterialData_obj,raw),HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00")},
	{hx::fsObject /*::iron::data::ShaderData*/ ,(int)offsetof(MaterialData_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MaterialData_obj,contexts),HX_HCSTRING("contexts","\xa4","\x9b","\x2b","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo MaterialData_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MaterialData_obj::uidCounter,HX_HCSTRING("uidCounter","\x4c","\x45","\x6c","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MaterialData_obj_sMemberFields[] = {
	HX_HCSTRING("uid","\x90","\x23","\x59","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("contexts","\xa4","\x9b","\x2b","\x2f"),
	HX_HCSTRING("getContext","\xf9","\x1b","\xd9","\x68"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void MaterialData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MaterialData_obj::uidCounter,"uidCounter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MaterialData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MaterialData_obj::uidCounter,"uidCounter");
};

#endif

hx::Class MaterialData_obj::__mClass;

static ::String MaterialData_obj_sStaticFields[] = {
	HX_HCSTRING("uidCounter","\x4c","\x45","\x6c","\xa9"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null())
};

void MaterialData_obj::__register()
{
	hx::Object *dummy = new MaterialData_obj;
	MaterialData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.data.MaterialData","\xaf","\x56","\x29","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MaterialData_obj::__GetStatic;
	__mClass->mSetStaticField = &MaterialData_obj::__SetStatic;
	__mClass->mMarkFunc = MaterialData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MaterialData_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MaterialData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MaterialData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MaterialData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MaterialData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MaterialData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MaterialData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_541f1e6235b388d5_10_boot)
HXDLIN(  10)		uidCounter = (int)0;
            	}
}

} // end namespace iron
} // end namespace data
