// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_zip_HuffTools
#include <haxe/zip/HuffTools.h>
#endif
#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5007e62d81f3dbb5_32_new,"haxe.zip.HuffTools","new",0x5263948b,"haxe.zip.HuffTools.new","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/zip/Huffman.hx",32,0x267ec330)
HX_LOCAL_STACK_FRAME(_hx_pos_5007e62d81f3dbb5_36_treeDepth,"haxe.zip.HuffTools","treeDepth",0x748ac930,"haxe.zip.HuffTools.treeDepth","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/zip/Huffman.hx",36,0x267ec330)
HX_LOCAL_STACK_FRAME(_hx_pos_5007e62d81f3dbb5_46_treeCompress,"haxe.zip.HuffTools","treeCompress",0x66340995,"haxe.zip.HuffTools.treeCompress","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/zip/Huffman.hx",46,0x267ec330)
HX_LOCAL_STACK_FRAME(_hx_pos_5007e62d81f3dbb5_64_treeWalk,"haxe.zip.HuffTools","treeWalk",0x2e5c697c,"haxe.zip.HuffTools.treeWalk","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/zip/Huffman.hx",64,0x267ec330)
HX_LOCAL_STACK_FRAME(_hx_pos_5007e62d81f3dbb5_76_treeMake,"haxe.zip.HuffTools","treeMake",0x27c04661,"haxe.zip.HuffTools.treeMake","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/zip/Huffman.hx",76,0x267ec330)
HX_LOCAL_STACK_FRAME(_hx_pos_5007e62d81f3dbb5_86_make,"haxe.zip.HuffTools","make",0xc4121b63,"haxe.zip.HuffTools.make","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/zip/Huffman.hx",86,0x267ec330)
namespace haxe{
namespace zip{

void HuffTools_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5007e62d81f3dbb5_32_new)
            	}

Dynamic HuffTools_obj::__CreateEmpty() { return new HuffTools_obj; }

void *HuffTools_obj::_hx_vtable = 0;

Dynamic HuffTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HuffTools_obj > _hx_result = new HuffTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HuffTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10a15413;
}

int HuffTools_obj::treeDepth( ::haxe::zip::Huffman t){
            	HX_STACKFRAME(&_hx_pos_5007e62d81f3dbb5_36_treeDepth)
HXDLIN(  36)		switch((int)(_hx_getEnumValueIndex(t))){
            			case (int)0: {
HXLINE(  37)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE(  39)				 ::haxe::zip::Huffman b = t->_hx_getObject(1).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN(  39)				 ::haxe::zip::Huffman a = t->_hx_getObject(0).StaticCast<  ::haxe::zip::Huffman >();
HXLINE(  40)				int da = this->treeDepth(a);
HXLINE(  41)				int db = this->treeDepth(b);
HXLINE(  42)				int _hx_tmp;
HXDLIN(  42)				if ((da < db)) {
HXLINE(  42)					_hx_tmp = da;
            				}
            				else {
HXLINE(  42)					_hx_tmp = db;
            				}
HXDLIN(  42)				return ((int)1 + _hx_tmp);
            			}
            			break;
            			case (int)2: {
HXLINE(  38)				HX_STACK_DO_THROW(HX_("assert",c6,46,03,4c));
            			}
            			break;
            		}
HXLINE(  36)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HuffTools_obj,treeDepth,return )

 ::haxe::zip::Huffman HuffTools_obj::treeCompress( ::haxe::zip::Huffman t){
            	HX_STACKFRAME(&_hx_pos_5007e62d81f3dbb5_46_treeCompress)
HXLINE(  47)		int d = this->treeDepth(t);
HXLINE(  48)		if ((d == (int)0)) {
HXLINE(  49)			return t;
            		}
HXLINE(  50)		if ((d == (int)1)) {
HXLINE(  51)			if ((_hx_getEnumValueIndex(t) == (int)1)) {
HXLINE(  52)				 ::haxe::zip::Huffman b = t->_hx_getObject(1).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN(  52)				 ::haxe::zip::Huffman a = t->_hx_getObject(0).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN(  52)				 ::haxe::zip::Huffman _hx_tmp = this->treeCompress(a);
HXDLIN(  52)				return ::haxe::zip::Huffman_obj::NeedBit(_hx_tmp,this->treeCompress(b));
            			}
            			else {
HXLINE(  53)				HX_STACK_DO_THROW(HX_("assert",c6,46,03,4c));
            			}
            		}
HXLINE(  55)		int size = ((int)(int)1 << (int)d);
HXLINE(  56)		::Array< ::Dynamic> table = ::Array_obj< ::Dynamic>::__new();
HXLINE(  57)		{
HXLINE(  57)			int _g1 = (int)0;
HXDLIN(  57)			int _g = size;
HXDLIN(  57)			while((_g1 < _g)){
HXLINE(  57)				_g1 = (_g1 + (int)1);
HXDLIN(  57)				int i = (_g1 - (int)1);
HXLINE(  58)				table->push(::haxe::zip::Huffman_obj::Found((int)-1));
            			}
            		}
HXLINE(  59)		this->treeWalk(table,(int)0,(int)0,d,t);
HXLINE(  60)		return ::haxe::zip::Huffman_obj::NeedBits(d,table);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HuffTools_obj,treeCompress,return )

void HuffTools_obj::treeWalk(::Array< ::Dynamic> table,int p,int cd,int d, ::haxe::zip::Huffman t){
            	HX_STACKFRAME(&_hx_pos_5007e62d81f3dbb5_64_treeWalk)
HXDLIN(  64)		if ((_hx_getEnumValueIndex(t) == (int)1)) {
HXLINE(  65)			 ::haxe::zip::Huffman b = t->_hx_getObject(1).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN(  65)			 ::haxe::zip::Huffman a = t->_hx_getObject(0).StaticCast<  ::haxe::zip::Huffman >();
HXLINE(  66)			if ((d > (int)0)) {
HXLINE(  67)				this->treeWalk(table,p,(cd + (int)1),(d - (int)1),a);
HXLINE(  68)				this->treeWalk(table,((int)p | (int)((int)(int)1 << (int)cd)),(cd + (int)1),(d - (int)1),b);
            			}
            			else {
HXLINE(  70)				table[p] = this->treeCompress(t);
            			}
            		}
            		else {
HXLINE(  72)			table[p] = this->treeCompress(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(HuffTools_obj,treeWalk,(void))

 ::haxe::zip::Huffman HuffTools_obj::treeMake( ::haxe::ds::IntMap bits,int maxbits,int v,int len){
            	HX_STACKFRAME(&_hx_pos_5007e62d81f3dbb5_76_treeMake)
HXLINE(  77)		if ((len > maxbits)) {
HXLINE(  77)			HX_STACK_DO_THROW(HX_("Invalid huffman",e4,e4,8f,a6));
            		}
HXLINE(  78)		int idx = ((int)((int)v << (int)(int)5) | (int)len);
HXLINE(  79)		if (bits->exists(idx)) {
HXLINE(  80)			return ::haxe::zip::Huffman_obj::Found(bits->get(idx));
            		}
HXLINE(  81)		v = ((int)v << (int)(int)1);
HXLINE(  82)		len = (len + (int)1);
HXLINE(  83)		 ::haxe::zip::Huffman _hx_tmp = this->treeMake(bits,maxbits,v,len);
HXDLIN(  83)		return ::haxe::zip::Huffman_obj::NeedBit(_hx_tmp,this->treeMake(bits,maxbits,((int)v | (int)(int)1),len));
            	}


HX_DEFINE_DYNAMIC_FUNC4(HuffTools_obj,treeMake,return )

 ::haxe::zip::Huffman HuffTools_obj::make(::Array< int > lengths,int pos,int nlengths,int maxbits){
            	HX_GC_STACKFRAME(&_hx_pos_5007e62d81f3dbb5_86_make)
HXLINE(  87)		::Array< int > counts = ::Array_obj< int >::__new();
HXLINE(  88)		::Array< int > tmp = ::Array_obj< int >::__new();
HXLINE(  89)		if ((maxbits > (int)32)) {
HXLINE(  89)			HX_STACK_DO_THROW(HX_("Invalid huffman",e4,e4,8f,a6));
            		}
HXLINE(  90)		{
HXLINE(  90)			int _g1 = (int)0;
HXDLIN(  90)			int _g = maxbits;
HXDLIN(  90)			while((_g1 < _g)){
HXLINE(  90)				_g1 = (_g1 + (int)1);
HXDLIN(  90)				int i = (_g1 - (int)1);
HXLINE(  91)				counts->push((int)0);
HXLINE(  92)				tmp->push((int)0);
            			}
            		}
HXLINE(  94)		{
HXLINE(  94)			int _g11 = (int)0;
HXDLIN(  94)			int _g2 = nlengths;
HXDLIN(  94)			while((_g11 < _g2)){
HXLINE(  94)				_g11 = (_g11 + (int)1);
HXDLIN(  94)				int i1 = (_g11 - (int)1);
HXLINE(  95)				int p = lengths->__get((i1 + pos));
HXLINE(  96)				if ((p >= maxbits)) {
HXLINE(  96)					HX_STACK_DO_THROW(HX_("Invalid huffman",e4,e4,8f,a6));
            				}
HXLINE(  97)				counts[p]++;
            			}
            		}
HXLINE(  99)		int code = (int)0;
HXLINE( 100)		{
HXLINE( 100)			int _g12 = (int)1;
HXDLIN( 100)			int _g3 = (maxbits - (int)1);
HXDLIN( 100)			while((_g12 < _g3)){
HXLINE( 100)				_g12 = (_g12 + (int)1);
HXDLIN( 100)				int i2 = (_g12 - (int)1);
HXLINE( 101)				code = ((int)(code + counts->__get(i2)) << (int)(int)1);
HXLINE( 102)				tmp[i2] = code;
            			}
            		}
HXLINE( 104)		 ::haxe::ds::IntMap bits =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 105)		{
HXLINE( 105)			int _g13 = (int)0;
HXDLIN( 105)			int _g4 = nlengths;
HXDLIN( 105)			while((_g13 < _g4)){
HXLINE( 105)				_g13 = (_g13 + (int)1);
HXDLIN( 105)				int i3 = (_g13 - (int)1);
HXLINE( 106)				int l = lengths->__get((i3 + pos));
HXLINE( 107)				if ((l != (int)0)) {
HXLINE( 108)					int n = tmp->__get((l - (int)1));
HXLINE( 109)					tmp[(l - (int)1)] = (n + (int)1);
HXLINE( 110)					bits->set(((int)((int)n << (int)(int)5) | (int)l),i3);
            				}
            			}
            		}
HXLINE( 113)		 ::haxe::zip::Huffman _hx_tmp = this->treeMake(bits,maxbits,(int)0,(int)1);
HXDLIN( 113)		return this->treeCompress(::haxe::zip::Huffman_obj::NeedBit(_hx_tmp,this->treeMake(bits,maxbits,(int)1,(int)1)));
            	}


HX_DEFINE_DYNAMIC_FUNC4(HuffTools_obj,make,return )


hx::ObjectPtr< HuffTools_obj > HuffTools_obj::__new() {
	hx::ObjectPtr< HuffTools_obj > __this = new HuffTools_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HuffTools_obj > HuffTools_obj::__alloc(hx::Ctx *_hx_ctx) {
	HuffTools_obj *__this = (HuffTools_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HuffTools_obj), false, "haxe.zip.HuffTools"));
	*(void **)__this = HuffTools_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HuffTools_obj::HuffTools_obj()
{
}

hx::Val HuffTools_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return hx::Val( make_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"treeWalk") ) { return hx::Val( treeWalk_dyn() ); }
		if (HX_FIELD_EQ(inName,"treeMake") ) { return hx::Val( treeMake_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"treeDepth") ) { return hx::Val( treeDepth_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"treeCompress") ) { return hx::Val( treeCompress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HuffTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HuffTools_obj_sStaticStorageInfo = 0;
#endif

static ::String HuffTools_obj_sMemberFields[] = {
	HX_HCSTRING("treeDepth","\xc5","\x12","\x35","\x42"),
	HX_HCSTRING("treeCompress","\x20","\x2b","\xda","\xa1"),
	HX_HCSTRING("treeWalk","\x87","\x29","\xba","\x32"),
	HX_HCSTRING("treeMake","\x6c","\x06","\x1e","\x2c"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	::String(null()) };

static void HuffTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HuffTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HuffTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HuffTools_obj::__mClass,"__mClass");
};

#endif

hx::Class HuffTools_obj::__mClass;

void HuffTools_obj::__register()
{
	hx::Object *dummy = new HuffTools_obj;
	HuffTools_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.HuffTools","\x19","\xf3","\x2d","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HuffTools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HuffTools_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HuffTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HuffTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HuffTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HuffTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
