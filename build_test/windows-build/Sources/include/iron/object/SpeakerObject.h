// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_object_SpeakerObject
#define INCLUDED_iron_object_SpeakerObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
HX_DECLARE_CLASS2(iron,object,Object)
HX_DECLARE_CLASS2(iron,object,SpeakerObject)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS2(kha,audio1,AudioChannel)

namespace iron{
namespace object{


class HXCPP_CLASS_ATTRIBUTES SpeakerObject_obj : public  ::iron::object::Object_obj
{
	public:
		typedef  ::iron::object::Object_obj super;
		typedef SpeakerObject_obj OBJ_;
		SpeakerObject_obj();

	public:
		enum { _hx_ClassId = 0x7aad5b57 };

		void __construct( ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.object.SpeakerObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.object.SpeakerObject"); }
		static hx::ObjectPtr< SpeakerObject_obj > __new( ::Dynamic data);
		static hx::ObjectPtr< SpeakerObject_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpeakerObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SpeakerObject","\xfe","\x20","\x51","\x9f"); }

		 ::Dynamic data;
		 ::kha::Sound sound;
		::Array< ::Dynamic> channels;
		bool paused;
		void init();
		::Dynamic init_dyn();

		void play();
		::Dynamic play_dyn();

		void pause();
		::Dynamic pause_dyn();

		void stop();
		::Dynamic stop_dyn();

		void update();
		::Dynamic update_dyn();

		void remove();

};

} // end namespace iron
} // end namespace object

#endif /* INCLUDED_iron_object_SpeakerObject */ 
