// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_haxe_IMap
#define INCLUDED_haxe_IMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES IMap_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (hx::Object :: *_hx_iterator)(); 
		static inline  ::Dynamic iterator( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::IMap_obj *>(_hx_.mPtr->_hx_getInterface(0x09c2bd39)))->_hx_iterator)();
		}
};

} // end namespace haxe

#endif /* INCLUDED_haxe_IMap */ 
