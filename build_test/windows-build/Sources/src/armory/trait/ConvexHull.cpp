// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_armory_trait_ConvexHull
#include <armory/trait/ConvexHull.h>
#endif
#ifndef INCLUDED_armory_trait_Face3
#include <armory/trait/Face3.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_669097e2671c5868_644_new,"armory.trait.ConvexHull","new",0xbec3d95a,"armory.trait.ConvexHull.new","armory/trait/PhysicsBreak.hx",644,0x7f52e3b0)
static const int _hx_array_data_2199e468_6[] = {
	(int)0,(int)1,(int)2,
};
static const int _hx_array_data_2199e468_7[] = {
	(int)0,(int)2,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_669097e2671c5868_681_computeFaceNormals,"armory.trait.ConvexHull","computeFaceNormals",0xa343275e,"armory.trait.ConvexHull.computeFaceNormals","armory/trait/PhysicsBreak.hx",681,0x7f52e3b0)
HX_LOCAL_STACK_FRAME(_hx_pos_669097e2671c5868_694_addPoint,"armory.trait.ConvexHull","addPoint",0xfb980735,"armory.trait.ConvexHull.addPoint","armory/trait/PhysicsBreak.hx",694,0x7f52e3b0)
HX_LOCAL_STACK_FRAME(_hx_pos_669097e2671c5868_741_visible,"armory.trait.ConvexHull","visible",0x8065866c,"armory.trait.ConvexHull.visible","armory/trait/PhysicsBreak.hx",741,0x7f52e3b0)
HX_LOCAL_STACK_FRAME(_hx_pos_669097e2671c5868_750_normal,"armory.trait.ConvexHull","normal",0x06edc16d,"armory.trait.ConvexHull.normal","armory/trait/PhysicsBreak.hx",750,0x7f52e3b0)
HX_LOCAL_STACK_FRAME(_hx_pos_669097e2671c5868_761_equalEdge,"armory.trait.ConvexHull","equalEdge",0x19baae8b,"armory.trait.ConvexHull.equalEdge","armory/trait/PhysicsBreak.hx",761,0x7f52e3b0)
HX_LOCAL_STACK_FRAME(_hx_pos_669097e2671c5868_765_randomOffset,"armory.trait.ConvexHull","randomOffset",0x483119bc,"armory.trait.ConvexHull.randomOffset","armory/trait/PhysicsBreak.hx",765,0x7f52e3b0)
namespace armory{
namespace trait{

void ConvexHull_obj::__construct(::Array< ::Dynamic> vertices){
            	HX_GC_STACKFRAME(&_hx_pos_669097e2671c5868_644_new)
HXLINE( 679)		this->ab =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 678)		this->cb =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 648)		this->vertices = ::Array_obj< ::Dynamic>::__new();
HXLINE( 647)		this->face3s = ::Array_obj< ::Dynamic>::__new();
HXLINE( 646)		this->faces = ::Array_obj< ::Dynamic>::__new(2)->init(0,::Array_obj< int >::fromData( _hx_array_data_2199e468_6,3))->init(1,::Array_obj< int >::fromData( _hx_array_data_2199e468_7,3));
HXLINE( 652)		{
HXLINE( 652)			int _g1 = (int)3;
HXDLIN( 652)			int _g = vertices->length;
HXDLIN( 652)			while((_g1 < _g)){
HXLINE( 652)				_g1 = (_g1 + (int)1);
HXDLIN( 652)				int i = (_g1 - (int)1);
HXDLIN( 652)				this->addPoint(i,vertices);
            			}
            		}
HXLINE( 656)		int id = (int)0;
HXLINE( 657)		::Array< int > newId = ::Array_obj< int >::__new();
HXLINE( 658)		{
HXLINE( 658)			int _g11 = (int)0;
HXDLIN( 658)			int _g2 = vertices->length;
HXDLIN( 658)			while((_g11 < _g2)){
HXLINE( 658)				_g11 = (_g11 + (int)1);
HXDLIN( 658)				int i1 = (_g11 - (int)1);
HXDLIN( 658)				newId->push((int)-1);
            			}
            		}
HXLINE( 660)		{
HXLINE( 660)			int _g12 = (int)0;
HXDLIN( 660)			int _g3 = this->faces->length;
HXDLIN( 660)			while((_g12 < _g3)){
HXLINE( 660)				_g12 = (_g12 + (int)1);
HXDLIN( 660)				int i2 = (_g12 - (int)1);
HXLINE( 661)				::Array< int > face = this->faces->__get(i2).StaticCast< ::Array< int > >();
HXLINE( 662)				{
HXLINE( 662)					int _g21 = (int)0;
HXDLIN( 662)					while((_g21 < (int)3)){
HXLINE( 662)						_g21 = (_g21 + (int)1);
HXDLIN( 662)						int j = (_g21 - (int)1);
HXLINE( 663)						if ((newId->__get(face->__get(j)) == (int)-1)) {
HXLINE( 664)							id = (id + (int)1);
HXDLIN( 664)							newId[face->__get(j)] = (id - (int)1);
HXLINE( 665)							::Array< ::Dynamic> _hx_tmp = this->vertices;
HXDLIN( 665)							_hx_tmp->push(vertices->__get(face->__get(j)).StaticCast<  ::iron::math::Vec4 >());
            						}
HXLINE( 667)						face[j] = newId->__get(face->__get(j));
            					}
            				}
            			}
            		}
HXLINE( 671)		{
HXLINE( 671)			int _g13 = (int)0;
HXDLIN( 671)			int _g4 = this->faces->length;
HXDLIN( 671)			while((_g13 < _g4)){
HXLINE( 671)				_g13 = (_g13 + (int)1);
HXDLIN( 671)				int i3 = (_g13 - (int)1);
HXLINE( 672)				::Array< ::Dynamic> _hx_tmp1 = this->face3s;
HXDLIN( 672)				int _hx_tmp2 = this->faces->__get(i3).StaticCast< ::Array< int > >()->__get((int)0);
HXDLIN( 672)				int _hx_tmp3 = this->faces->__get(i3).StaticCast< ::Array< int > >()->__get((int)1);
HXDLIN( 672)				_hx_tmp1->push( ::armory::trait::Face3_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp3,this->faces->__get(i3).StaticCast< ::Array< int > >()->__get((int)2)));
            			}
            		}
HXLINE( 675)		this->computeFaceNormals();
            	}

Dynamic ConvexHull_obj::__CreateEmpty() { return new ConvexHull_obj; }

void *ConvexHull_obj::_hx_vtable = 0;

Dynamic ConvexHull_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConvexHull_obj > _hx_result = new ConvexHull_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ConvexHull_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62107de8;
}

void ConvexHull_obj::computeFaceNormals(){
            	HX_STACKFRAME(&_hx_pos_669097e2671c5868_681_computeFaceNormals)
HXDLIN( 681)		int _g1 = (int)0;
HXDLIN( 681)		int _g = this->face3s->length;
HXDLIN( 681)		while((_g1 < _g)){
HXDLIN( 681)			_g1 = (_g1 + (int)1);
HXDLIN( 681)			int f = (_g1 - (int)1);
HXLINE( 682)			 ::armory::trait::Face3 face = this->face3s->__get(f).StaticCast<  ::armory::trait::Face3 >();
HXLINE( 683)			 ::iron::math::Vec4 va = this->vertices->__get(face->a).StaticCast<  ::iron::math::Vec4 >();
HXLINE( 684)			 ::iron::math::Vec4 vb = this->vertices->__get(face->b).StaticCast<  ::iron::math::Vec4 >();
HXLINE( 685)			 ::iron::math::Vec4 vc = this->vertices->__get(face->c).StaticCast<  ::iron::math::Vec4 >();
HXLINE( 686)			this->cb->subvecs(vc,vb);
HXLINE( 687)			this->ab->subvecs(va,vb);
HXLINE( 688)			this->cb->cross(this->ab);
HXLINE( 689)			this->cb->normalize();
HXLINE( 690)			face->normal->setFrom(this->cb);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexHull_obj,computeFaceNormals,(void))

void ConvexHull_obj::addPoint(int vertexId,::Array< ::Dynamic> vertices){
            	HX_STACKFRAME(&_hx_pos_669097e2671c5868_694_addPoint)
HXLINE( 695)		 ::iron::math::Vec4 vertex = vertices->__get(vertexId).StaticCast<  ::iron::math::Vec4 >()->clone();
HXLINE( 697)		float v = (vertex->x * vertex->x);
HXDLIN( 697)		float v1 = (v + (vertex->y * vertex->y));
HXDLIN( 697)		float mag = ::Math_obj::sqrt((v1 + (vertex->z * vertex->z)));
HXLINE( 698)		 ::iron::math::Vec4 vertex1 = vertex;
HXDLIN( 698)		float vertex2 = vertex1->x;
HXDLIN( 698)		vertex1->x = (vertex2 + (mag * this->randomOffset()));
HXLINE( 699)		 ::iron::math::Vec4 vertex3 = vertex;
HXDLIN( 699)		float vertex4 = vertex3->y;
HXDLIN( 699)		vertex3->y = (vertex4 + (mag * this->randomOffset()));
HXLINE( 700)		 ::iron::math::Vec4 vertex5 = vertex;
HXDLIN( 700)		float vertex6 = vertex5->z;
HXDLIN( 700)		vertex5->z = (vertex6 + (mag * this->randomOffset()));
HXLINE( 702)		::Array< ::Dynamic> hole = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 703)		int f = (int)0;
HXLINE( 704)		while((f < this->faces->length)){
HXLINE( 705)			::Array< int > face = this->faces->__get(f).StaticCast< ::Array< int > >();
HXLINE( 709)			if (this->visible(face,vertex,vertices)) {
HXLINE( 710)				{
HXLINE( 710)					int _g = (int)0;
HXDLIN( 710)					while((_g < (int)3)){
HXLINE( 710)						_g = (_g + (int)1);
HXDLIN( 710)						int e = (_g - (int)1);
HXLINE( 711)						::Array< int > edge = ::Array_obj< int >::__new(2)->init(0,face->__get(e))->init(1,face->__get(hx::Mod((e + (int)1),(int)3)));
HXLINE( 712)						bool boundary = true;
HXLINE( 715)						{
HXLINE( 715)							int _g2 = (int)0;
HXDLIN( 715)							int _g1 = hole->length;
HXDLIN( 715)							while((_g2 < _g1)){
HXLINE( 715)								_g2 = (_g2 + (int)1);
HXDLIN( 715)								int h = (_g2 - (int)1);
HXLINE( 716)								if (this->equalEdge(hole->__get(h).StaticCast< ::Array< int > >(),edge)) {
HXLINE( 717)									hole[h] = hole->__get((hole->length - (int)1)).StaticCast< ::Array< int > >();
HXLINE( 718)									hole->pop();
HXLINE( 719)									boundary = false;
HXLINE( 720)									goto _hx_goto_12;
            								}
            							}
            							_hx_goto_12:;
            						}
HXLINE( 723)						if (boundary) {
HXLINE( 723)							hole->push(edge);
            						}
            					}
            				}
HXLINE( 726)				::Array< ::Dynamic> _hx_tmp = this->faces;
HXDLIN( 726)				::Array< ::Dynamic> _hx_tmp1 = this->faces;
HXDLIN( 726)				_hx_tmp[f] = _hx_tmp1->__get((this->faces->length - (int)1)).StaticCast< ::Array< int > >();
HXLINE( 727)				this->faces->pop();
            			}
            			else {
HXLINE( 730)				f = (f + (int)1);
            			}
            		}
HXLINE( 735)		{
HXLINE( 735)			int _g11 = (int)0;
HXDLIN( 735)			int _g3 = hole->length;
HXDLIN( 735)			while((_g11 < _g3)){
HXLINE( 735)				_g11 = (_g11 + (int)1);
HXDLIN( 735)				int h1 = (_g11 - (int)1);
HXLINE( 736)				this->faces->push(::Array_obj< int >::__new(3)->init(0,hole->__get(h1).StaticCast< ::Array< int > >()->__get((int)0))->init(1,hole->__get(h1).StaticCast< ::Array< int > >()->__get((int)1))->init(2,vertexId));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConvexHull_obj,addPoint,(void))

bool ConvexHull_obj::visible(::Array< int > face, ::iron::math::Vec4 vertex,::Array< ::Dynamic> vertices){
            	HX_STACKFRAME(&_hx_pos_669097e2671c5868_741_visible)
HXLINE( 742)		 ::iron::math::Vec4 va = vertices->__get(face->__get((int)0)).StaticCast<  ::iron::math::Vec4 >();
HXLINE( 743)		 ::iron::math::Vec4 vb = vertices->__get(face->__get((int)1)).StaticCast<  ::iron::math::Vec4 >();
HXLINE( 744)		 ::iron::math::Vec4 vc = vertices->__get(face->__get((int)2)).StaticCast<  ::iron::math::Vec4 >();
HXLINE( 745)		 ::iron::math::Vec4 n = this->normal(va,vb,vc);
HXLINE( 746)		float dist = n->dot(va);
HXLINE( 747)		return (n->dot(vertex) >= dist);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ConvexHull_obj,visible,return )

 ::iron::math::Vec4 ConvexHull_obj::normal( ::iron::math::Vec4 va, ::iron::math::Vec4 vb, ::iron::math::Vec4 vc){
            	HX_GC_STACKFRAME(&_hx_pos_669097e2671c5868_750_normal)
HXLINE( 751)		 ::iron::math::Vec4 cb =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 752)		 ::iron::math::Vec4 ab =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 753)		cb->subvecs(vc,vb);
HXLINE( 754)		ab->subvecs(va,vb);
HXLINE( 755)		cb->cross(ab);
HXLINE( 756)		cb->normalize();
HXLINE( 757)		return cb;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ConvexHull_obj,normal,return )

bool ConvexHull_obj::equalEdge(::Array< int > ea,::Array< int > eb){
            	HX_STACKFRAME(&_hx_pos_669097e2671c5868_761_equalEdge)
HXDLIN( 761)		if ((ea->__get((int)0) == eb->__get((int)1))) {
HXDLIN( 761)			return (ea->__get((int)1) == eb->__get((int)0));
            		}
            		else {
HXDLIN( 761)			return false;
            		}
HXDLIN( 761)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConvexHull_obj,equalEdge,return )

Float ConvexHull_obj::randomOffset(){
            	HX_STACKFRAME(&_hx_pos_669097e2671c5868_765_randomOffset)
HXDLIN( 765)		return (((::Math_obj::random() - ((Float)0.5)) * (int)2) * ((Float)1e-6));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvexHull_obj,randomOffset,return )


hx::ObjectPtr< ConvexHull_obj > ConvexHull_obj::__new(::Array< ::Dynamic> vertices) {
	hx::ObjectPtr< ConvexHull_obj > __this = new ConvexHull_obj();
	__this->__construct(vertices);
	return __this;
}

hx::ObjectPtr< ConvexHull_obj > ConvexHull_obj::__alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> vertices) {
	ConvexHull_obj *__this = (ConvexHull_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConvexHull_obj), true, "armory.trait.ConvexHull"));
	*(void **)__this = ConvexHull_obj::_hx_vtable;
	__this->__construct(vertices);
	return __this;
}

ConvexHull_obj::ConvexHull_obj()
{
}

void ConvexHull_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvexHull);
	HX_MARK_MEMBER_NAME(faces,"faces");
	HX_MARK_MEMBER_NAME(face3s,"face3s");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(cb,"cb");
	HX_MARK_MEMBER_NAME(ab,"ab");
	HX_MARK_END_CLASS();
}

void ConvexHull_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(faces,"faces");
	HX_VISIT_MEMBER_NAME(face3s,"face3s");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(cb,"cb");
	HX_VISIT_MEMBER_NAME(ab,"ab");
}

hx::Val ConvexHull_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cb") ) { return hx::Val( cb ); }
		if (HX_FIELD_EQ(inName,"ab") ) { return hx::Val( ab ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"faces") ) { return hx::Val( faces ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"face3s") ) { return hx::Val( face3s ); }
		if (HX_FIELD_EQ(inName,"normal") ) { return hx::Val( normal_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return hx::Val( vertices ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return hx::Val( addPoint_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"equalEdge") ) { return hx::Val( equalEdge_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"randomOffset") ) { return hx::Val( randomOffset_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"computeFaceNormals") ) { return hx::Val( computeFaceNormals_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ConvexHull_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cb") ) { cb=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ab") ) { ab=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"faces") ) { faces=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"face3s") ) { face3s=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConvexHull_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("faces","\x36","\x55","\x48","\xfb"));
	outFields->push(HX_HCSTRING("face3s","\xbd","\x02","\x02","\xe4"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("cb","\x9f","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("ab","\xe1","\x54","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ConvexHull_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ConvexHull_obj,faces),HX_HCSTRING("faces","\x36","\x55","\x48","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ConvexHull_obj,face3s),HX_HCSTRING("face3s","\xbd","\x02","\x02","\xe4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ConvexHull_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(ConvexHull_obj,cb),HX_HCSTRING("cb","\x9f","\x56","\x00","\x00")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(ConvexHull_obj,ab),HX_HCSTRING("ab","\xe1","\x54","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ConvexHull_obj_sStaticStorageInfo = 0;
#endif

static ::String ConvexHull_obj_sMemberFields[] = {
	HX_HCSTRING("faces","\x36","\x55","\x48","\xfb"),
	HX_HCSTRING("face3s","\xbd","\x02","\x02","\xe4"),
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("cb","\x9f","\x56","\x00","\x00"),
	HX_HCSTRING("ab","\xe1","\x54","\x00","\x00"),
	HX_HCSTRING("computeFaceNormals","\x18","\x07","\x62","\x9d"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),
	HX_HCSTRING("equalEdge","\x11","\xae","\x9e","\x9f"),
	HX_HCSTRING("randomOffset","\xf6","\x11","\x29","\x38"),
	::String(null()) };

static void ConvexHull_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvexHull_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConvexHull_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvexHull_obj::__mClass,"__mClass");
};

#endif

hx::Class ConvexHull_obj::__mClass;

void ConvexHull_obj::__register()
{
	hx::Object *dummy = new ConvexHull_obj;
	ConvexHull_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.ConvexHull","\x68","\xe4","\x99","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConvexHull_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConvexHull_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConvexHull_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConvexHull_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvexHull_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvexHull_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
