// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_object_ParticleSystem
#define INCLUDED_iron_object_ParticleSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,data,Data)
HX_DECLARE_CLASS2(iron,data,ParticleData)
HX_DECLARE_CLASS2(iron,math,Mat4)
HX_DECLARE_CLASS2(iron,object,MeshObject)
HX_DECLARE_CLASS2(iron,object,Object)
HX_DECLARE_CLASS2(iron,object,Particle)
HX_DECLARE_CLASS2(iron,object,ParticleSystem)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)

namespace iron{
namespace object{


class HXCPP_CLASS_ATTRIBUTES ParticleSystem_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ParticleSystem_obj OBJ_;
		ParticleSystem_obj();

	public:
		enum { _hx_ClassId = 0x2815a97c };

		void __construct(::String sceneName, ::Dynamic pref);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.object.ParticleSystem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.object.ParticleSystem"); }
		static hx::ObjectPtr< ParticleSystem_obj > __new(::String sceneName, ::Dynamic pref);
		static hx::ObjectPtr< ParticleSystem_obj > __alloc(hx::Ctx *_hx_ctx,::String sceneName, ::Dynamic pref);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ParticleSystem_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ParticleSystem","\xf5","\xd5","\xbe","\x12"); }

		 ::iron::data::ParticleData data;
		::Array< ::Dynamic> particles;
		bool ready;
		int frameRate;
		Float lifetime;
		Float animtime;
		Float time;
		Float spawnRate;
		Float seed;
		 ::Dynamic r;
		Float gx;
		Float gy;
		Float gz;
		Float alignx;
		Float aligny;
		Float alignz;
		Float dimx;
		Float dimy;
		int tilesx;
		int tilesy;
		int tilesFramerate;
		 ::kha::arrays::Float32ArrayPrivate emitFrom;
		int count;
		int lap;
		Float lapTime;
		 ::iron::math::Mat4 m;
		 ::iron::math::Mat4 getData();
		::Dynamic getData_dyn();

		void update( ::iron::object::MeshObject object, ::iron::object::MeshObject owner);
		::Dynamic update_dyn();

		void updateGpu( ::iron::object::MeshObject object, ::iron::object::MeshObject owner);
		::Dynamic updateGpu_dyn();

		void updateCpu( ::iron::object::MeshObject object, ::iron::object::MeshObject owner);
		::Dynamic updateCpu_dyn();

		void computePos( ::iron::object::Particle p, ::iron::object::MeshObject object,int l,int lap,int count);
		::Dynamic computePos_dyn();

		void computeNewton( ::iron::object::Particle p,int i,Float age);
		::Dynamic computeNewton_dyn();

		void setupGeomGpu( ::iron::object::MeshObject object, ::iron::object::MeshObject owner);
		::Dynamic setupGeomGpu_dyn();

		void setupGeomCpu( ::iron::object::MeshObject object, ::iron::object::MeshObject owner);
		::Dynamic setupGeomCpu_dyn();

		void sort();
		::Dynamic sort_dyn();

		Float fhash(int n);
		::Dynamic fhash_dyn();

		void remove();
		::Dynamic remove_dyn();

};

} // end namespace iron
} // end namespace object

#endif /* INCLUDED_iron_object_ParticleSystem */ 
