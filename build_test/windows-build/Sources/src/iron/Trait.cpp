// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_iron_App
#include <iron/App.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_5_new,"iron.Trait","new",0xadc250fa,"iron.Trait.new","iron/Trait.hx",5,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_23_remove,"iron.Trait","remove",0xf0f4f7ea,"iron.Trait.remove","iron/Trait.hx",23,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_26_notifyOnAdd,"iron.Trait","notifyOnAdd",0xe8630d53,"iron.Trait.notifyOnAdd","iron/Trait.hx",26,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_31_notifyOnInit,"iron.Trait","notifyOnInit",0x7399eb9e,"iron.Trait.notifyOnInit","iron/Trait.hx",31,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_37_notifyOnRemove,"iron.Trait","notifyOnRemove",0x6bdf0c52,"iron.Trait.notifyOnRemove","iron/Trait.hx",37,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_42_notifyOnUpdate,"iron.Trait","notifyOnUpdate",0xee5bf617,"iron.Trait.notifyOnUpdate","iron/Trait.hx",42,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_48_removeUpdate,"iron.Trait","removeUpdate",0x13c0bd93,"iron.Trait.removeUpdate","iron/Trait.hx",48,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_53_notifyOnLateUpdate,"iron.Trait","notifyOnLateUpdate",0xd63b74dd,"iron.Trait.notifyOnLateUpdate","iron/Trait.hx",53,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_59_removeLateUpdate,"iron.Trait","removeLateUpdate",0xa0bfaa59,"iron.Trait.removeLateUpdate","iron/Trait.hx",59,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_64_notifyOnRender,"iron.Trait","notifyOnRender",0x6c7fdb64,"iron.Trait.notifyOnRender","iron/Trait.hx",64,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_70_removeRender,"iron.Trait","removeRender",0x91e4a2e0,"iron.Trait.removeRender","iron/Trait.hx",70,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_75_notifyOnRender2D,"iron.Trait","notifyOnRender2D",0x70b8a836,"iron.Trait.notifyOnRender2D","iron/Trait.hx",75,0xf191d4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a97bb283ec9ba9b9_81_removeRender2D,"iron.Trait","removeRender2D",0x4e7b46b2,"iron.Trait.removeRender2D","iron/Trait.hx",81,0xf191d4b7)
namespace iron{

void Trait_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_5_new)
HXLINE(  16)		this->_render2D = null();
HXLINE(  15)		this->_render = null();
HXLINE(  14)		this->_lateUpdate = null();
HXLINE(  13)		this->_update = null();
HXLINE(  12)		this->_remove = null();
HXLINE(  11)		this->_init = null();
HXLINE(  10)		this->_add = null();
HXLINE(   7)		this->name = HX_("",00,00,00,00);
            	}

Dynamic Trait_obj::__CreateEmpty() { return new Trait_obj; }

void *Trait_obj::_hx_vtable = 0;

Dynamic Trait_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Trait_obj > _hx_result = new Trait_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Trait_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b609ac2;
}

void Trait_obj::remove(){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_23_remove)
HXDLIN(  23)		this->object->removeTrait(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Trait_obj,remove,(void))

void Trait_obj::notifyOnAdd( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_26_notifyOnAdd)
HXLINE(  27)		if (hx::IsNull( this->_add )) {
HXLINE(  27)			this->_add = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  28)		this->_add->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,notifyOnAdd,(void))

void Trait_obj::notifyOnInit( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_31_notifyOnInit)
HXLINE(  32)		if (hx::IsNull( this->_init )) {
HXLINE(  32)			this->_init = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  33)		this->_init->push(f);
HXLINE(  34)		::iron::App_obj::notifyOnInit(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,notifyOnInit,(void))

void Trait_obj::notifyOnRemove( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_37_notifyOnRemove)
HXLINE(  38)		if (hx::IsNull( this->_remove )) {
HXLINE(  38)			this->_remove = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  39)		this->_remove->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,notifyOnRemove,(void))

void Trait_obj::notifyOnUpdate( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_42_notifyOnUpdate)
HXLINE(  43)		if (hx::IsNull( this->_update )) {
HXLINE(  43)			this->_update = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  44)		this->_update->push(f);
HXLINE(  45)		::iron::App_obj::notifyOnUpdate(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,notifyOnUpdate,(void))

void Trait_obj::removeUpdate( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_48_removeUpdate)
HXLINE(  49)		this->_update->remove(f);
HXLINE(  50)		::iron::App_obj::removeUpdate(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,removeUpdate,(void))

void Trait_obj::notifyOnLateUpdate( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_53_notifyOnLateUpdate)
HXLINE(  54)		if (hx::IsNull( this->_lateUpdate )) {
HXLINE(  54)			this->_lateUpdate = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  55)		this->_lateUpdate->push(f);
HXLINE(  56)		::iron::App_obj::notifyOnLateUpdate(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,notifyOnLateUpdate,(void))

void Trait_obj::removeLateUpdate( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_59_removeLateUpdate)
HXLINE(  60)		this->_lateUpdate->remove(f);
HXLINE(  61)		::iron::App_obj::removeLateUpdate(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,removeLateUpdate,(void))

void Trait_obj::notifyOnRender( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_64_notifyOnRender)
HXLINE(  65)		if (hx::IsNull( this->_render )) {
HXLINE(  65)			this->_render = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  66)		this->_render->push(f);
HXLINE(  67)		::iron::App_obj::notifyOnRender(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,notifyOnRender,(void))

void Trait_obj::removeRender( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_70_removeRender)
HXLINE(  71)		this->_render->remove(f);
HXLINE(  72)		::iron::App_obj::removeRender(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,removeRender,(void))

void Trait_obj::notifyOnRender2D( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_75_notifyOnRender2D)
HXLINE(  76)		if (hx::IsNull( this->_render2D )) {
HXLINE(  76)			this->_render2D = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  77)		this->_render2D->push(f);
HXLINE(  78)		::iron::App_obj::notifyOnRender2D(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,notifyOnRender2D,(void))

void Trait_obj::removeRender2D( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a97bb283ec9ba9b9_81_removeRender2D)
HXLINE(  82)		this->_render2D->remove(f);
HXLINE(  83)		::iron::App_obj::removeRender2D(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Trait_obj,removeRender2D,(void))


hx::ObjectPtr< Trait_obj > Trait_obj::__new() {
	hx::ObjectPtr< Trait_obj > __this = new Trait_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Trait_obj > Trait_obj::__alloc(hx::Ctx *_hx_ctx) {
	Trait_obj *__this = (Trait_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Trait_obj), true, "iron.Trait"));
	*(void **)__this = Trait_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Trait_obj::Trait_obj()
{
}

void Trait_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Trait);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(_add,"_add");
	HX_MARK_MEMBER_NAME(_init,"_init");
	HX_MARK_MEMBER_NAME(_remove,"_remove");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_lateUpdate,"_lateUpdate");
	HX_MARK_MEMBER_NAME(_render,"_render");
	HX_MARK_MEMBER_NAME(_render2D,"_render2D");
	HX_MARK_END_CLASS();
}

void Trait_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(_add,"_add");
	HX_VISIT_MEMBER_NAME(_init,"_init");
	HX_VISIT_MEMBER_NAME(_remove,"_remove");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_lateUpdate,"_lateUpdate");
	HX_VISIT_MEMBER_NAME(_render,"_render");
	HX_VISIT_MEMBER_NAME(_render2D,"_render2D");
}

hx::Val Trait_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"_add") ) { return hx::Val( _add ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_init") ) { return hx::Val( _init ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return hx::Val( object ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_remove") ) { return hx::Val( _remove ); }
		if (HX_FIELD_EQ(inName,"_update") ) { return hx::Val( _update ); }
		if (HX_FIELD_EQ(inName,"_render") ) { return hx::Val( _render ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_render2D") ) { return hx::Val( _render2D ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_lateUpdate") ) { return hx::Val( _lateUpdate ); }
		if (HX_FIELD_EQ(inName,"notifyOnAdd") ) { return hx::Val( notifyOnAdd_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"notifyOnInit") ) { return hx::Val( notifyOnInit_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeUpdate") ) { return hx::Val( removeUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeRender") ) { return hx::Val( removeRender_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notifyOnRemove") ) { return hx::Val( notifyOnRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"notifyOnUpdate") ) { return hx::Val( notifyOnUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"notifyOnRender") ) { return hx::Val( notifyOnRender_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeRender2D") ) { return hx::Val( removeRender2D_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeLateUpdate") ) { return hx::Val( removeLateUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"notifyOnRender2D") ) { return hx::Val( notifyOnRender2D_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"notifyOnLateUpdate") ) { return hx::Val( notifyOnLateUpdate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Trait_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_add") ) { _add=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_init") ) { _init=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::iron::object::Object >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_remove") ) { _remove=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_render") ) { _render=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_render2D") ) { _render2D=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_lateUpdate") ) { _lateUpdate=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Trait_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("_add","\x22","\x37","\x15","\x3f"));
	outFields->push(HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"));
	outFields->push(HX_HCSTRING("_remove","\xe3","\xad","\xff","\x72"));
	outFields->push(HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"));
	outFields->push(HX_HCSTRING("_lateUpdate","\xee","\xb2","\xda","\xed"));
	outFields->push(HX_HCSTRING("_render","\xf5","\x7c","\xa0","\x73"));
	outFields->push(HX_HCSTRING("_render2D","\x07","\x90","\x71","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Trait_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Trait_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::iron::object::Object*/ ,(int)offsetof(Trait_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Trait_obj,_add),HX_HCSTRING("_add","\x22","\x37","\x15","\x3f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Trait_obj,_init),HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Trait_obj,_remove),HX_HCSTRING("_remove","\xe3","\xad","\xff","\x72")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Trait_obj,_update),HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Trait_obj,_lateUpdate),HX_HCSTRING("_lateUpdate","\xee","\xb2","\xda","\xed")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Trait_obj,_render),HX_HCSTRING("_render","\xf5","\x7c","\xa0","\x73")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Trait_obj,_render2D),HX_HCSTRING("_render2D","\x07","\x90","\x71","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Trait_obj_sStaticStorageInfo = 0;
#endif

static ::String Trait_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("_add","\x22","\x37","\x15","\x3f"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("_remove","\xe3","\xad","\xff","\x72"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_lateUpdate","\xee","\xb2","\xda","\xed"),
	HX_HCSTRING("_render","\xf5","\x7c","\xa0","\x73"),
	HX_HCSTRING("_render2D","\x07","\x90","\x71","\xfa"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("notifyOnAdd","\xb9","\x62","\x3b","\x83"),
	HX_HCSTRING("notifyOnInit","\x78","\x4f","\x0c","\x56"),
	HX_HCSTRING("notifyOnRemove","\xac","\x9a","\x95","\x9a"),
	HX_HCSTRING("notifyOnUpdate","\x71","\x84","\x12","\x1d"),
	HX_HCSTRING("removeUpdate","\x6d","\x21","\x33","\xf6"),
	HX_HCSTRING("notifyOnLateUpdate","\x37","\x38","\x61","\x50"),
	HX_HCSTRING("removeLateUpdate","\x33","\x03","\xfa","\xd4"),
	HX_HCSTRING("notifyOnRender","\xbe","\x69","\x36","\x9b"),
	HX_HCSTRING("removeRender","\xba","\x06","\x57","\x74"),
	HX_HCSTRING("notifyOnRender2D","\x10","\x01","\xf3","\xa4"),
	HX_HCSTRING("removeRender2D","\x0c","\xd5","\x31","\x7d"),
	::String(null()) };

static void Trait_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Trait_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Trait_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Trait_obj::__mClass,"__mClass");
};

#endif

hx::Class Trait_obj::__mClass;

void Trait_obj::__register()
{
	hx::Object *dummy = new Trait_obj;
	Trait_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.Trait","\x08","\x0c","\xdc","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Trait_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Trait_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Trait_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Trait_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Trait_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Trait_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
