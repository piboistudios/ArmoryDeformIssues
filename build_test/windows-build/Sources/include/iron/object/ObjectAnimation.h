// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_object_ObjectAnimation
#define INCLUDED_iron_object_ObjectAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_object_Animation
#include <iron/object/Animation.h>
#endif
HX_DECLARE_CLASS2(iron,object,Animation)
HX_DECLARE_CLASS2(iron,object,Object)
HX_DECLARE_CLASS2(iron,object,ObjectAnimation)
HX_DECLARE_CLASS2(iron,object,Transform)
HX_DECLARE_CLASS2(kha,arrays,Uint32ArrayPrivate)

namespace iron{
namespace object{


class HXCPP_CLASS_ATTRIBUTES ObjectAnimation_obj : public  ::iron::object::Animation_obj
{
	public:
		typedef  ::iron::object::Animation_obj super;
		typedef ObjectAnimation_obj OBJ_;
		ObjectAnimation_obj();

	public:
		enum { _hx_ClassId = 0x0e495cf6 };

		void __construct( ::iron::object::Object object,::Array< ::Dynamic> oactions);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.object.ObjectAnimation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.object.ObjectAnimation"); }
		static hx::ObjectPtr< ObjectAnimation_obj > __new( ::iron::object::Object object,::Array< ::Dynamic> oactions);
		static hx::ObjectPtr< ObjectAnimation_obj > __alloc(hx::Ctx *_hx_ctx, ::iron::object::Object object,::Array< ::Dynamic> oactions);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectAnimation_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ObjectAnimation","\x25","\x08","\x04","\x37"); }

		 ::iron::object::Object object;
		::Array< ::Dynamic> oactions;
		 ::Dynamic oaction;
		 ::Dynamic getAction(::String action);
		::Dynamic getAction_dyn();

		void play(::String action, ::Dynamic onComplete,hx::Null< Float >  blendTime,hx::Null< Float >  speed,hx::Null< bool >  loop);

		void update(Float delta);

		void updateObjectAnim();
		::Dynamic updateObjectAnim_dyn();

		Float interpolateLinear(Float t,Float t1,Float t2);
		::Dynamic interpolateLinear_dyn();

		Float interpolateBezier(Float t,Float t1,Float t2);
		::Dynamic interpolateBezier_dyn();

		void interpolateTcb();
		::Dynamic interpolateTcb_dyn();

		bool checkFrameIndexT( ::kha::arrays::Uint32ArrayPrivate frameValues,Float t);
		::Dynamic checkFrameIndexT_dyn();

		void updateAnimNonSampled( ::Dynamic anim, ::iron::object::Transform transform);
		::Dynamic updateAnimNonSampled_dyn();

		int totalFrames();

};

} // end namespace iron
} // end namespace object

#endif /* INCLUDED_iron_object_ObjectAnimation */ 
