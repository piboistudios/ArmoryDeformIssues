// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics2_VerTextAlignment
#define INCLUDED_kha_graphics2_VerTextAlignment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics2,VerTextAlignment)
namespace kha{
namespace graphics2{


class VerTextAlignment_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef VerTextAlignment_obj OBJ_;

	public:
		VerTextAlignment_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics2.VerTextAlignment","\x84","\x03","\x10","\x6f"); }
		::String __ToString() const { return HX_HCSTRING("VerTextAlignment.","\x9b","\x6c","\xe4","\x8a") + _hx_tag; }

		static ::kha::graphics2::VerTextAlignment TextBottom;
		static inline ::kha::graphics2::VerTextAlignment TextBottom_dyn() { return TextBottom; }
		static ::kha::graphics2::VerTextAlignment TextMiddle;
		static inline ::kha::graphics2::VerTextAlignment TextMiddle_dyn() { return TextMiddle; }
		static ::kha::graphics2::VerTextAlignment TextTop;
		static inline ::kha::graphics2::VerTextAlignment TextTop_dyn() { return TextTop; }
};

} // end namespace kha
} // end namespace graphics2

#endif /* INCLUDED_kha_graphics2_VerTextAlignment */ 