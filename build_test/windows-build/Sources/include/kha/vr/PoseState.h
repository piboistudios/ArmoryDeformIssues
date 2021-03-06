// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_vr_PoseState
#define INCLUDED_kha_vr_PoseState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a4000b2914fad01e_16_new)
HX_DECLARE_CLASS2(kha,math,Vector3)
HX_DECLARE_CLASS2(kha,vr,Pose)
HX_DECLARE_CLASS2(kha,vr,PoseState)

namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES PoseState_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PoseState_obj OBJ_;
		PoseState_obj();

	public:
		enum { _hx_ClassId = 0x494ded00 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.vr.PoseState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.vr.PoseState"); }

		hx::ObjectPtr< PoseState_obj > __new() {
			hx::ObjectPtr< PoseState_obj > __this = new PoseState_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< PoseState_obj > __alloc(hx::Ctx *_hx_ctx) {
			PoseState_obj *__this = (PoseState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PoseState_obj), true, "kha.vr.PoseState"));
			*(void **)__this = PoseState_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a4000b2914fad01e_16_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PoseState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PoseState","\xe0","\xfb","\xb8","\xdf"); }

		 ::kha::vr::Pose Pose;
		 ::kha::math::Vector3 AngularVelocity;
		 ::kha::math::Vector3 LinearVelocity;
		 ::kha::math::Vector3 AngularAcceleration;
		 ::kha::math::Vector3 LinearAcceleration;
		Float TimeInSeconds;
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_PoseState */ 
