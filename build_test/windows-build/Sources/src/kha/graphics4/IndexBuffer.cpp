// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_arrays_Uint32ArrayPrivate
#include <kha/arrays/Uint32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d3cb332205fc9ba7_15_new,"kha.graphics4.IndexBuffer","new",0x2cfac555,"kha.graphics4.IndexBuffer.new","kha/graphics4/IndexBuffer.hx",15,0xae48d67d)
HX_LOCAL_STACK_FRAME(_hx_pos_d3cb332205fc9ba7_22_delete,"kha.graphics4.IndexBuffer","delete",0x13f39256,"kha.graphics4.IndexBuffer.delete","kha/graphics4/IndexBuffer.hx",22,0xae48d67d)
HX_LOCAL_STACK_FRAME(_hx_pos_d3cb332205fc9ba7_31_lock2,"kha.graphics4.IndexBuffer","lock2",0x54f6ae1c,"kha.graphics4.IndexBuffer.lock2","kha/graphics4/IndexBuffer.hx",31,0xae48d67d)
HX_LOCAL_STACK_FRAME(_hx_pos_d3cb332205fc9ba7_34_lock,"kha.graphics4.IndexBuffer","lock",0x2d26fd56,"kha.graphics4.IndexBuffer.lock","kha/graphics4/IndexBuffer.hx",34,0xae48d67d)
HX_LOCAL_STACK_FRAME(_hx_pos_d3cb332205fc9ba7_41_unlock,"kha.graphics4.IndexBuffer","unlock",0x0ea774ef,"kha.graphics4.IndexBuffer.unlock","kha/graphics4/IndexBuffer.hx",41,0xae48d67d)
HX_LOCAL_STACK_FRAME(_hx_pos_d3cb332205fc9ba7_46_count,"kha.graphics4.IndexBuffer","count",0x26692104,"kha.graphics4.IndexBuffer.count","kha/graphics4/IndexBuffer.hx",46,0xae48d67d)
namespace kha{
namespace graphics4{

void IndexBuffer_obj::__construct(int indexCount, ::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead){
bool canRead = __o_canRead.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d3cb332205fc9ba7_15_new)
HXLINE(  16)		this->myCount = indexCount;
HXLINE(  17)		 ::kha::arrays::Uint32ArrayPrivate this1 =  ::kha::arrays::Uint32ArrayPrivate_obj::__alloc( HX_CTX ,(int)0);
HXDLIN(  17)		this->data = this1;
HXLINE(  18)		buffer = new Kore::Graphics4::IndexBuffer(indexCount);;
            	}

Dynamic IndexBuffer_obj::__CreateEmpty() { return new IndexBuffer_obj; }

void *IndexBuffer_obj::_hx_vtable = 0;

Dynamic IndexBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IndexBuffer_obj > _hx_result = new IndexBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IndexBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c96bd29;
}

void IndexBuffer_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_d3cb332205fc9ba7_22_delete)
HXDLIN(  22)		delete buffer; buffer = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer_obj,_hx_delete,(void))

 ::kha::arrays::Uint32ArrayPrivate IndexBuffer_obj::lock2(int start,int count){
            	HX_STACKFRAME(&_hx_pos_d3cb332205fc9ba7_31_lock2)
            	
		data->self.data = (unsigned int*)buffer->lock() + start;
		data->self.myLength = count;
		return data;
	

HXDLIN(  31)		return this->data;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IndexBuffer_obj,lock2,return )

 ::kha::arrays::Uint32ArrayPrivate IndexBuffer_obj::lock( ::Dynamic start, ::Dynamic count){
            	HX_STACKFRAME(&_hx_pos_d3cb332205fc9ba7_34_lock)
HXLINE(  35)		if (hx::IsNull( start )) {
HXLINE(  35)			start = (int)0;
            		}
HXLINE(  36)		if (hx::IsNull( count )) {
HXLINE(  36)			count = this->count();
            		}
HXLINE(  37)		return this->lock2(start,count);
            	}


HX_DEFINE_DYNAMIC_FUNC2(IndexBuffer_obj,lock,return )

void IndexBuffer_obj::unlock(){
            	HX_STACKFRAME(&_hx_pos_d3cb332205fc9ba7_41_unlock)
            	buffer->unlock();

            	}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer_obj,unlock,(void))

int IndexBuffer_obj::count(){
            	HX_STACKFRAME(&_hx_pos_d3cb332205fc9ba7_46_count)
HXDLIN(  46)		return this->myCount;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer_obj,count,return )


hx::ObjectPtr< IndexBuffer_obj > IndexBuffer_obj::__new(int indexCount, ::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead) {
	hx::ObjectPtr< IndexBuffer_obj > __this = new IndexBuffer_obj();
	__this->__construct(indexCount,usage,__o_canRead);
	return __this;
}

hx::ObjectPtr< IndexBuffer_obj > IndexBuffer_obj::__alloc(hx::Ctx *_hx_ctx,int indexCount, ::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead) {
	IndexBuffer_obj *__this = (IndexBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IndexBuffer_obj), true, "kha.graphics4.IndexBuffer"));
	*(void **)__this = IndexBuffer_obj::_hx_vtable;
	__this->__construct(indexCount,usage,__o_canRead);
	return __this;
}

IndexBuffer_obj::IndexBuffer_obj()
{
}

void IndexBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(myCount,"myCount");
	HX_MARK_END_CLASS();
}

void IndexBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(myCount,"myCount");
}

hx::Val IndexBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"lock") ) { return hx::Val( lock_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lock2") ) { return hx::Val( lock2_dyn() ); }
		if (HX_FIELD_EQ(inName,"count") ) { return hx::Val( count_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn() ); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return hx::Val( unlock_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myCount") ) { return hx::Val( myCount ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IndexBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::kha::arrays::Uint32ArrayPrivate >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myCount") ) { myCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("myCount","\xc3","\xed","\x62","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IndexBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::arrays::Uint32ArrayPrivate*/ ,(int)offsetof(IndexBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(IndexBuffer_obj,myCount),HX_HCSTRING("myCount","\xc3","\xed","\x62","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IndexBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String IndexBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("myCount","\xc3","\xed","\x62","\xf3"),
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	HX_HCSTRING("lock2","\xe7","\xd1","\xf0","\x78"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	::String(null()) };

static void IndexBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IndexBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer_obj::__mClass;

void IndexBuffer_obj::__register()
{
	hx::Object *dummy = new IndexBuffer_obj;
	IndexBuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.IndexBuffer","\xe3","\x76","\xd6","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IndexBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IndexBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IndexBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IndexBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IndexBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
