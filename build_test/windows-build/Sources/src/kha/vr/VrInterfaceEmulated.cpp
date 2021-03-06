// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_c5728fd05c542abe
#define INCLUDED_c5728fd05c542abe
#include "cpp_float32array.h"
#endif
#ifndef INCLUDED_7d028c26efabce49
#define INCLUDED_7d028c26efabce49
#include "cpp_uint32array.h"
#endif
#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Shaders
#include <kha/Shaders.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_arrays_Uint32ArrayPrivate
#include <kha/arrays/Uint32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_input_Gamepad
#include <kha/input/Gamepad.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_input_Mouse
#include <kha/input/Mouse.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif
#ifndef INCLUDED_kha_math_Quaternion
#include <kha/math/Quaternion.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif
#ifndef INCLUDED_kha_math_Vector4
#include <kha/math/Vector4.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
#ifndef INCLUDED_kha_vr_Pose
#include <kha/vr/Pose.h>
#endif
#ifndef INCLUDED_kha_vr_PoseState
#include <kha/vr/PoseState.h>
#endif
#ifndef INCLUDED_kha_vr_SensorState
#include <kha/vr/SensorState.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpImage
#include <kha/vr/TimeWarpImage.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpParms
#include <kha/vr/TimeWarpParms.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterface
#include <kha/vr/VrInterface.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterfaceEmulated
#include <kha/vr/VrInterfaceEmulated.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_33_new,"kha.vr.VrInterfaceEmulated","new",0xc6e9e8f8,"kha.vr.VrInterfaceEmulated.new","kha/vr/VrInterfaceEmulated.hx",33,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_54_degreesToRadians,"kha.vr.VrInterfaceEmulated","degreesToRadians",0x4600b5f8,"kha.vr.VrInterfaceEmulated.degreesToRadians","kha/vr/VrInterfaceEmulated.hx",54,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_58_updateOrientation,"kha.vr.VrInterfaceEmulated","updateOrientation",0x4fdf8ddf,"kha.vr.VrInterfaceEmulated.updateOrientation","kha/vr/VrInterfaceEmulated.hx",58,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_78_buttonEvent,"kha.vr.VrInterfaceEmulated","buttonEvent",0xf133f960,"kha.vr.VrInterfaceEmulated.buttonEvent","kha/vr/VrInterfaceEmulated.hx",78,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_82_axisEvent,"kha.vr.VrInterfaceEmulated","axisEvent",0x5e5f4e51,"kha.vr.VrInterfaceEmulated.axisEvent","kha/vr/VrInterfaceEmulated.hx",82,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_87_keyDownEvent,"kha.vr.VrInterfaceEmulated","keyDownEvent",0x41c15b21,"kha.vr.VrInterfaceEmulated.keyDownEvent","kha/vr/VrInterfaceEmulated.hx",87,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_108_keyUpEvent,"kha.vr.VrInterfaceEmulated","keyUpEvent",0xc9923248,"kha.vr.VrInterfaceEmulated.keyUpEvent","kha/vr/VrInterfaceEmulated.hx",108,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_130_mouseMoveEvent,"kha.vr.VrInterfaceEmulated","mouseMoveEvent",0xf683f2cc,"kha.vr.VrInterfaceEmulated.mouseMoveEvent","kha/vr/VrInterfaceEmulated.hx",130,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_151_mouseButtonDownEvent,"kha.vr.VrInterfaceEmulated","mouseButtonDownEvent",0xcb48abc9,"kha.vr.VrInterfaceEmulated.mouseButtonDownEvent","kha/vr/VrInterfaceEmulated.hx",151,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_159_mouseButtonUpEvent,"kha.vr.VrInterfaceEmulated","mouseButtonUpEvent",0x73d888f0,"kha.vr.VrInterfaceEmulated.mouseButtonUpEvent","kha/vr/VrInterfaceEmulated.hx",159,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_169_GetSensorState,"kha.vr.VrInterfaceEmulated","GetSensorState",0x2d744709,"kha.vr.VrInterfaceEmulated.GetSensorState","kha/vr/VrInterfaceEmulated.hx",169,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_174_GetPredictedSensorState,"kha.vr.VrInterfaceEmulated","GetPredictedSensorState",0x7876e4cd,"kha.vr.VrInterfaceEmulated.GetPredictedSensorState","kha/vr/VrInterfaceEmulated.hx",174,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_201_WarpSwapBlack,"kha.vr.VrInterfaceEmulated","WarpSwapBlack",0x6a38f13c,"kha.vr.VrInterfaceEmulated.WarpSwapBlack","kha/vr/VrInterfaceEmulated.hx",201,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_207_WarpSwapLoadingIcon,"kha.vr.VrInterfaceEmulated","WarpSwapLoadingIcon",0x01b62752,"kha.vr.VrInterfaceEmulated.WarpSwapLoadingIcon","kha/vr/VrInterfaceEmulated.hx",207,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_212_WarpSwap,"kha.vr.VrInterfaceEmulated","WarpSwap",0x6b1ff983,"kha.vr.VrInterfaceEmulated.WarpSwap","kha/vr/VrInterfaceEmulated.hx",212,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_241_GetTimeInSeconds,"kha.vr.VrInterfaceEmulated","GetTimeInSeconds",0xdfb4915f,"kha.vr.VrInterfaceEmulated.GetTimeInSeconds","kha/vr/VrInterfaceEmulated.hx",241,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_250_setVertex,"kha.vr.VrInterfaceEmulated","setVertex",0x8fe5eb3e,"kha.vr.VrInterfaceEmulated.setVertex","kha/vr/VrInterfaceEmulated.hx",250,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_46_boot,"kha.vr.VrInterfaceEmulated","boot",0x3ddaf09a,"kha.vr.VrInterfaceEmulated.boot","kha/vr/VrInterfaceEmulated.hx",46,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_48_boot,"kha.vr.VrInterfaceEmulated","boot",0x3ddaf09a,"kha.vr.VrInterfaceEmulated.boot","kha/vr/VrInterfaceEmulated.hx",48,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_50_boot,"kha.vr.VrInterfaceEmulated","boot",0x3ddaf09a,"kha.vr.VrInterfaceEmulated.boot","kha/vr/VrInterfaceEmulated.hx",50,0x856b8c18)
HX_LOCAL_STACK_FRAME(_hx_pos_850eac6dcb44ccbe_51_boot,"kha.vr.VrInterfaceEmulated","boot",0x3ddaf09a,"kha.vr.VrInterfaceEmulated.boot","kha/vr/VrInterfaceEmulated.hx",51,0x856b8c18)
namespace kha{
namespace vr{

void VrInterfaceEmulated_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_33_new)
HXLINE( 148)		this->mouseButtonDown = false;
HXLINE( 128)		this->oldMouseY = (int)0;
HXLINE( 127)		this->oldMouseX = (int)0;
HXLINE(  44)		this->yawDelta = ((Float)0.0);
HXLINE(  43)		this->pitchDelta = ((Float)0.0);
HXLINE(  41)		this->yawDegrees = ((Float)0.0);
HXLINE(  40)		this->pitchDegrees = ((Float)0.0);
HXLINE( 266)		super::__construct();
HXLINE( 268)		::kha::input::Gamepad_obj::get((int)0)->notify(this->axisEvent_dyn(),this->buttonEvent_dyn());
HXLINE( 269)		::kha::input::Keyboard_obj::get((int)0)->notify(this->keyDownEvent_dyn(),this->keyUpEvent_dyn(),null());
HXLINE( 270)		::kha::input::Mouse_obj::get((int)0)->notify(this->mouseButtonDownEvent_dyn(),this->mouseButtonUpEvent_dyn(),this->mouseMoveEvent_dyn(),null(),null());
HXLINE( 273)		 ::kha::graphics4::VertexStructure structure =  ::kha::graphics4::VertexStructure_obj::__alloc( HX_CTX );
HXLINE( 275)		this->orientation =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 276)		this->updateOrientation();
HXLINE( 280)		structure->add(HX_("vertexPosition",2d,3c,14,50),::kha::graphics4::VertexData_obj::Float3_dyn());
HXLINE( 281)		structure->add(HX_("texPosition",b0,79,ff,c7),::kha::graphics4::VertexData_obj::Float2_dyn());
HXLINE( 282)		structure->add(HX_("vertexColor",5f,3b,98,5e),::kha::graphics4::VertexData_obj::Float4_dyn());
HXLINE( 284)		this->vb =  ::kha::graphics4::VertexBuffer_obj::__alloc( HX_CTX ,(int)4,structure,::kha::graphics4::Usage_obj::StaticUsage_dyn(),null(),null());
HXLINE( 285)		 ::kha::arrays::Float32ArrayPrivate verts = this->vb->lock(null(),null());
HXLINE( 287)		 ::kha::math::Vector3 _hx_tmp =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,(int)-1,(int)-1,(int)0);
HXDLIN( 287)		 ::kha::math::Vector2 _hx_tmp1 =  ::kha::math::Vector2_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXDLIN( 287)		this->setVertex(verts,(int)0,_hx_tmp,_hx_tmp1, ::kha::math::Vector4_obj::__alloc( HX_CTX ,(int)1,(int)1,(int)1,(int)1));
HXLINE( 288)		 ::kha::math::Vector3 _hx_tmp2 =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,(int)-1,(int)1,(int)0);
HXDLIN( 288)		 ::kha::math::Vector2 _hx_tmp3 =  ::kha::math::Vector2_obj::__alloc( HX_CTX ,(int)0,(int)1);
HXDLIN( 288)		this->setVertex(verts,(int)1,_hx_tmp2,_hx_tmp3, ::kha::math::Vector4_obj::__alloc( HX_CTX ,(int)1,(int)1,(int)1,(int)1));
HXLINE( 289)		 ::kha::math::Vector3 _hx_tmp4 =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,(int)1,(int)-1,(int)0);
HXDLIN( 289)		 ::kha::math::Vector2 _hx_tmp5 =  ::kha::math::Vector2_obj::__alloc( HX_CTX ,(int)1,(int)0);
HXDLIN( 289)		this->setVertex(verts,(int)2,_hx_tmp4,_hx_tmp5, ::kha::math::Vector4_obj::__alloc( HX_CTX ,(int)1,(int)1,(int)1,(int)1));
HXLINE( 290)		 ::kha::math::Vector3 _hx_tmp6 =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,(int)1,(int)1,(int)0);
HXDLIN( 290)		 ::kha::math::Vector2 _hx_tmp7 =  ::kha::math::Vector2_obj::__alloc( HX_CTX ,(int)1,(int)1);
HXDLIN( 290)		this->setVertex(verts,(int)3,_hx_tmp6,_hx_tmp7, ::kha::math::Vector4_obj::__alloc( HX_CTX ,(int)1,(int)1,(int)1,(int)1));
HXLINE( 292)		this->vb->unlock();
HXLINE( 294)		this->ib =  ::kha::graphics4::IndexBuffer_obj::__alloc( HX_CTX ,(int)6,::kha::graphics4::Usage_obj::StaticUsage_dyn(),null());
HXLINE( 295)		 ::kha::arrays::Uint32ArrayPrivate indices = this->ib->lock(null(),null());
HXLINE( 297)		indices->self.set((int)0,(int)0);
HXLINE( 298)		indices->self.set((int)1,(int)1);
HXLINE( 299)		indices->self.set((int)2,(int)2);
HXLINE( 300)		indices->self.set((int)3,(int)1);
HXLINE( 301)		indices->self.set((int)4,(int)3);
HXLINE( 302)		indices->self.set((int)5,(int)2);
HXLINE( 304)		this->ib->unlock();
HXLINE( 306)		this->pipeline =  ::kha::graphics4::PipelineState_obj::__alloc( HX_CTX );
HXLINE( 308)		this->pipeline->vertexShader = ::kha::Shaders_obj::painter_image_vert;
HXLINE( 309)		this->pipeline->fragmentShader = ::kha::Shaders_obj::painter_image_frag;
HXLINE( 310)		this->pipeline->inputLayout = ::Array_obj< ::Dynamic>::__new(1)->init(0,structure);
HXLINE( 311)		this->pipeline->compile();
            	}

Dynamic VrInterfaceEmulated_obj::__CreateEmpty() { return new VrInterfaceEmulated_obj; }

void *VrInterfaceEmulated_obj::_hx_vtable = 0;

Dynamic VrInterfaceEmulated_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VrInterfaceEmulated_obj > _hx_result = new VrInterfaceEmulated_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VrInterfaceEmulated_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4de6d94e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4de6d94e;
	} else {
		return inClassId==(int)0x7519f3dd;
	}
}

Float VrInterfaceEmulated_obj::degreesToRadians(Float degrees){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_54_degreesToRadians)
HXDLIN(  54)		return ((Float)(degrees * ::Math_obj::PI) / (Float)((Float)180.0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VrInterfaceEmulated_obj,degreesToRadians,return )

void VrInterfaceEmulated_obj::updateOrientation(){
            	HX_GC_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_58_updateOrientation)
HXLINE(  60)		 ::kha::vr::VrInterfaceEmulated _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  60)		_hx_tmp->yawDegrees = (_hx_tmp->yawDegrees + this->yawDelta);
HXLINE(  61)		 ::kha::vr::VrInterfaceEmulated _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  61)		_hx_tmp1->pitchDegrees = (_hx_tmp1->pitchDegrees + this->pitchDelta);
HXLINE(  63)		if ((this->pitchDegrees < ((Float)-80))) {
HXLINE(  64)			this->pitchDegrees = ((Float)-80);
            		}
HXLINE(  65)		if ((this->pitchDegrees > ((Float)80))) {
HXLINE(  66)			this->pitchDegrees = ((Float)80);
            		}
HXLINE(  71)		 ::kha::math::Vector3 pitchQuat =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,(int)1,(int)0,(int)0);
HXDLIN(  71)		 ::kha::math::Quaternion pitchQuat1 = ::kha::math::Quaternion_obj::fromAxisAngle(pitchQuat,this->degreesToRadians(this->pitchDegrees));
HXLINE(  73)		 ::kha::math::Vector3 yawQuat =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,(int)0,(int)1,(int)0);
HXDLIN(  73)		 ::kha::math::Quaternion yawQuat1 = ::kha::math::Quaternion_obj::fromAxisAngle(yawQuat,this->degreesToRadians(this->yawDegrees));
HXLINE(  74)		this->orientation = yawQuat1->mult(pitchQuat1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterfaceEmulated_obj,updateOrientation,(void))

void VrInterfaceEmulated_obj::buttonEvent(int button,Float value){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_78_buttonEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,buttonEvent,(void))

void VrInterfaceEmulated_obj::axisEvent(int axis,Float value){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_82_axisEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,axisEvent,(void))

void VrInterfaceEmulated_obj::keyDownEvent(int code){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_87_keyDownEvent)
HXDLIN(  87)		switch((int)(code)){
            			case (int)37: {
HXLINE(  89)				this->yawDelta = ((Float)2.0);
            			}
            			break;
            			case (int)38: {
HXLINE(  95)				this->pitchDelta = ((Float)2.0);
            			}
            			break;
            			case (int)39: {
HXLINE(  92)				this->yawDelta = ((Float)-2.);
            			}
            			break;
            			case (int)40: {
HXLINE(  98)				this->pitchDelta = ((Float)-2.);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VrInterfaceEmulated_obj,keyDownEvent,(void))

void VrInterfaceEmulated_obj::keyUpEvent(int code){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_108_keyUpEvent)
HXDLIN( 108)		switch((int)(code)){
            			case (int)37: {
HXLINE( 110)				this->yawDelta = ((Float)0.0);
            			}
            			break;
            			case (int)38: {
HXLINE( 116)				this->pitchDelta = ((Float)0.0);
            			}
            			break;
            			case (int)39: {
HXLINE( 113)				this->yawDelta = ((Float)0.0);
            			}
            			break;
            			case (int)40: {
HXLINE( 119)				this->pitchDelta = ((Float)0.0);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VrInterfaceEmulated_obj,keyUpEvent,(void))

void VrInterfaceEmulated_obj::mouseMoveEvent(int x,int y,int movementX,int movementY){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_130_mouseMoveEvent)
HXLINE( 131)		if (!(this->mouseButtonDown)) {
HXLINE( 131)			return;
            		}
HXLINE( 133)		int mouseDeltaX = (x - this->oldMouseX);
HXLINE( 134)		int mouseDeltaY = (y - this->oldMouseY);
HXLINE( 135)		this->oldMouseX = x;
HXLINE( 136)		this->oldMouseY = y;
HXLINE( 139)		 ::kha::vr::VrInterfaceEmulated _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 139)		_hx_tmp->yawDegrees = (_hx_tmp->yawDegrees + (mouseDeltaX * ((Float)0.1)));
HXLINE( 140)		 ::kha::vr::VrInterfaceEmulated _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 140)		_hx_tmp1->pitchDegrees = (_hx_tmp1->pitchDegrees + (mouseDeltaY * ((Float)0.1)));
HXLINE( 142)		if ((this->pitchDegrees < ((Float)-80))) {
HXLINE( 143)			this->pitchDegrees = ((Float)-80);
            		}
HXLINE( 144)		if ((this->pitchDegrees > ((Float)80))) {
HXLINE( 145)			this->pitchDegrees = ((Float)80);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(VrInterfaceEmulated_obj,mouseMoveEvent,(void))

void VrInterfaceEmulated_obj::mouseButtonDownEvent(int button,int x,int y){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_151_mouseButtonDownEvent)
HXDLIN( 151)		if ((button == (int)0)) {
HXLINE( 152)			this->mouseButtonDown = true;
HXLINE( 153)			this->oldMouseX = x;
HXLINE( 154)			this->oldMouseY = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(VrInterfaceEmulated_obj,mouseButtonDownEvent,(void))

void VrInterfaceEmulated_obj::mouseButtonUpEvent(int button,int x,int y){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_159_mouseButtonUpEvent)
HXDLIN( 159)		if ((button == (int)0)) {
HXLINE( 160)			this->mouseButtonDown = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(VrInterfaceEmulated_obj,mouseButtonUpEvent,(void))

 ::kha::vr::SensorState VrInterfaceEmulated_obj::GetSensorState(){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_169_GetSensorState)
HXDLIN( 169)		return this->GetPredictedSensorState(((Float)0.0));
            	}


 ::kha::vr::SensorState VrInterfaceEmulated_obj::GetPredictedSensorState(Float time){
            	HX_GC_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_174_GetPredictedSensorState)
HXLINE( 176)		this->updateOrientation();
HXLINE( 178)		 ::kha::vr::SensorState result =  ::kha::vr::SensorState_obj::__alloc( HX_CTX );
HXLINE( 180)		result->Status = (int)0;
HXLINE( 181)		result->Temperature = (int)75;
HXLINE( 182)		result->Predicted =  ::kha::vr::PoseState_obj::__alloc( HX_CTX );
HXLINE( 183)		result->Recorded = result->Predicted;
HXLINE( 185)		result->Predicted->AngularAcceleration =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 186)		result->Predicted->AngularVelocity =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 187)		result->Predicted->LinearAcceleration =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 188)		result->Predicted->LinearVelocity =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 189)		result->Predicted->TimeInSeconds = time;
HXLINE( 190)		result->Predicted->Pose =  ::kha::vr::Pose_obj::__alloc( HX_CTX );
HXLINE( 191)		result->Predicted->Pose->Orientation = this->orientation;
HXLINE( 192)		result->Predicted->Pose->Position =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 196)		return result;
            	}


void VrInterfaceEmulated_obj::WarpSwapBlack(){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_201_WarpSwapBlack)
            	}


void VrInterfaceEmulated_obj::WarpSwapLoadingIcon(){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_207_WarpSwapLoadingIcon)
            	}


void VrInterfaceEmulated_obj::WarpSwap( ::kha::vr::TimeWarpParms parms){
            	HX_GC_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_212_WarpSwap)
HXLINE( 214)		::Dynamic g = this->framebuffer->get_g4();
HXLINE( 215)		::kha::graphics4::Graphics_obj::begin(g,null());
HXLINE( 216)		::kha::graphics4::Graphics_obj::setPipeline(g,this->pipeline);
HXLINE( 217)		::kha::graphics4::Graphics_obj::setVertexBuffer(g,this->vb);
HXLINE( 218)		::kha::graphics4::Graphics_obj::setIndexBuffer(g,this->ib);
HXLINE( 219)		::Dynamic matrixLocation = this->pipeline->getConstantLocation(HX_("projectionMatrix",30,88,bb,d0));
HXLINE( 220)		 ::kha::math::FastMatrix4 p =  ::kha::math::FastMatrix4_obj::__alloc( HX_CTX ,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);
HXLINE( 221)		::kha::graphics4::Graphics_obj::setMatrix(g,matrixLocation,p);
HXLINE( 222)		::Dynamic texture = this->pipeline->getTextureUnit(HX_("tex",e7,5d,58,00));
HXLINE( 224)		::kha::graphics4::Graphics_obj::setTexture(g,texture,parms->RightImage->Image);
HXLINE( 225)		::kha::graphics4::Graphics_obj::drawIndexedVertices(g,null(),null());
HXLINE( 233)		::kha::graphics4::Graphics_obj::end(g);
            	}


Float VrInterfaceEmulated_obj::GetTimeInSeconds(){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_241_GetTimeInSeconds)
HXDLIN( 241)		return ::kha::System_obj::get_time();
            	}


void VrInterfaceEmulated_obj::setVertex( ::kha::arrays::Float32ArrayPrivate a,int index, ::kha::math::Vector3 pos, ::kha::math::Vector2 uv, ::kha::math::Vector4 color){
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_250_setVertex)
HXLINE( 251)		int base = (index * (int)9);
HXLINE( 252)		a->self.set(base,pos->x);
HXLINE( 253)		{
HXLINE( 253)			 float32array a1 = a->self;
HXDLIN( 253)			a1.set((base + (int)1),pos->y);
            		}
HXLINE( 254)		{
HXLINE( 254)			 float32array a2 = a->self;
HXDLIN( 254)			a2.set((base + (int)2),pos->z);
            		}
HXLINE( 255)		base = (base + (int)3);
HXLINE( 256)		a->self.set(base,uv->x);
HXLINE( 257)		{
HXLINE( 257)			 float32array a3 = a->self;
HXDLIN( 257)			a3.set((base + (int)1),uv->y);
            		}
HXLINE( 258)		base = (base + (int)2);
HXLINE( 259)		a->self.set(base,color->x);
HXLINE( 260)		{
HXLINE( 260)			 float32array a4 = a->self;
HXDLIN( 260)			a4.set((base + (int)1),color->y);
            		}
HXLINE( 261)		{
HXLINE( 261)			 float32array a5 = a->self;
HXDLIN( 261)			a5.set((base + (int)2),color->z);
            		}
HXLINE( 262)		{
HXLINE( 262)			 float32array a6 = a->self;
HXDLIN( 262)			a6.set((base + (int)3),color->w);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(VrInterfaceEmulated_obj,setVertex,(void))

Float VrInterfaceEmulated_obj::keyboardSpeed;

Float VrInterfaceEmulated_obj::mouseSpeed;

Float VrInterfaceEmulated_obj::minPitchDegrees;

Float VrInterfaceEmulated_obj::maxPitchDegrees;


hx::ObjectPtr< VrInterfaceEmulated_obj > VrInterfaceEmulated_obj::__new() {
	hx::ObjectPtr< VrInterfaceEmulated_obj > __this = new VrInterfaceEmulated_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VrInterfaceEmulated_obj > VrInterfaceEmulated_obj::__alloc(hx::Ctx *_hx_ctx) {
	VrInterfaceEmulated_obj *__this = (VrInterfaceEmulated_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VrInterfaceEmulated_obj), true, "kha.vr.VrInterfaceEmulated"));
	*(void **)__this = VrInterfaceEmulated_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VrInterfaceEmulated_obj::VrInterfaceEmulated_obj()
{
}

void VrInterfaceEmulated_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VrInterfaceEmulated);
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(pitchDegrees,"pitchDegrees");
	HX_MARK_MEMBER_NAME(yawDegrees,"yawDegrees");
	HX_MARK_MEMBER_NAME(pitchDelta,"pitchDelta");
	HX_MARK_MEMBER_NAME(yawDelta,"yawDelta");
	HX_MARK_MEMBER_NAME(oldMouseX,"oldMouseX");
	HX_MARK_MEMBER_NAME(oldMouseY,"oldMouseY");
	HX_MARK_MEMBER_NAME(mouseButtonDown,"mouseButtonDown");
	HX_MARK_MEMBER_NAME(vb,"vb");
	HX_MARK_MEMBER_NAME(ib,"ib");
	HX_MARK_MEMBER_NAME(pipeline,"pipeline");
	HX_MARK_END_CLASS();
}

void VrInterfaceEmulated_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(pitchDegrees,"pitchDegrees");
	HX_VISIT_MEMBER_NAME(yawDegrees,"yawDegrees");
	HX_VISIT_MEMBER_NAME(pitchDelta,"pitchDelta");
	HX_VISIT_MEMBER_NAME(yawDelta,"yawDelta");
	HX_VISIT_MEMBER_NAME(oldMouseX,"oldMouseX");
	HX_VISIT_MEMBER_NAME(oldMouseY,"oldMouseY");
	HX_VISIT_MEMBER_NAME(mouseButtonDown,"mouseButtonDown");
	HX_VISIT_MEMBER_NAME(vb,"vb");
	HX_VISIT_MEMBER_NAME(ib,"ib");
	HX_VISIT_MEMBER_NAME(pipeline,"pipeline");
}

hx::Val VrInterfaceEmulated_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { return hx::Val( vb ); }
		if (HX_FIELD_EQ(inName,"ib") ) { return hx::Val( ib ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yawDelta") ) { return hx::Val( yawDelta ); }
		if (HX_FIELD_EQ(inName,"WarpSwap") ) { return hx::Val( WarpSwap_dyn() ); }
		if (HX_FIELD_EQ(inName,"pipeline") ) { return hx::Val( pipeline ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"axisEvent") ) { return hx::Val( axisEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"oldMouseX") ) { return hx::Val( oldMouseX ); }
		if (HX_FIELD_EQ(inName,"oldMouseY") ) { return hx::Val( oldMouseY ); }
		if (HX_FIELD_EQ(inName,"setVertex") ) { return hx::Val( setVertex_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"yawDegrees") ) { return hx::Val( yawDegrees ); }
		if (HX_FIELD_EQ(inName,"pitchDelta") ) { return hx::Val( pitchDelta ); }
		if (HX_FIELD_EQ(inName,"keyUpEvent") ) { return hx::Val( keyUpEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return hx::Val( framebuffer ); }
		if (HX_FIELD_EQ(inName,"orientation") ) { return hx::Val( orientation ); }
		if (HX_FIELD_EQ(inName,"buttonEvent") ) { return hx::Val( buttonEvent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pitchDegrees") ) { return hx::Val( pitchDegrees ); }
		if (HX_FIELD_EQ(inName,"keyDownEvent") ) { return hx::Val( keyDownEvent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WarpSwapBlack") ) { return hx::Val( WarpSwapBlack_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseMoveEvent") ) { return hx::Val( mouseMoveEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetSensorState") ) { return hx::Val( GetSensorState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mouseButtonDown") ) { return hx::Val( mouseButtonDown ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"degreesToRadians") ) { return hx::Val( degreesToRadians_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetTimeInSeconds") ) { return hx::Val( GetTimeInSeconds_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateOrientation") ) { return hx::Val( updateOrientation_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mouseButtonUpEvent") ) { return hx::Val( mouseButtonUpEvent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"WarpSwapLoadingIcon") ) { return hx::Val( WarpSwapLoadingIcon_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouseButtonDownEvent") ) { return hx::Val( mouseButtonDownEvent_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GetPredictedSensorState") ) { return hx::Val( GetPredictedSensorState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VrInterfaceEmulated_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { vb=inValue.Cast<  ::kha::graphics4::VertexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ib") ) { ib=inValue.Cast<  ::kha::graphics4::IndexBuffer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yawDelta") ) { yawDelta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pipeline") ) { pipeline=inValue.Cast<  ::kha::graphics4::PipelineState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"oldMouseX") ) { oldMouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldMouseY") ) { oldMouseY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"yawDegrees") ) { yawDegrees=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pitchDelta") ) { pitchDelta=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast<  ::kha::Framebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast<  ::kha::math::Quaternion >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pitchDegrees") ) { pitchDegrees=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mouseButtonDown") ) { mouseButtonDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VrInterfaceEmulated_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98"));
	outFields->push(HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e"));
	outFields->push(HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4"));
	outFields->push(HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9"));
	outFields->push(HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6"));
	outFields->push(HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6"));
	outFields->push(HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd"));
	outFields->push(HX_HCSTRING("vb","\x2c","\x67","\x00","\x00"));
	outFields->push(HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("pipeline","\x22","\xbb","\x83","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VrInterfaceEmulated_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Framebuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*::kha::math::Quaternion*/ ,(int)offsetof(VrInterfaceEmulated_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,pitchDegrees),HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,yawDegrees),HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,pitchDelta),HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,yawDelta),HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9")},
	{hx::fsInt,(int)offsetof(VrInterfaceEmulated_obj,oldMouseX),HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6")},
	{hx::fsInt,(int)offsetof(VrInterfaceEmulated_obj,oldMouseY),HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6")},
	{hx::fsBool,(int)offsetof(VrInterfaceEmulated_obj,mouseButtonDown),HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,vb),HX_HCSTRING("vb","\x2c","\x67","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,ib),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::PipelineState*/ ,(int)offsetof(VrInterfaceEmulated_obj,pipeline),HX_HCSTRING("pipeline","\x22","\xbb","\x83","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo VrInterfaceEmulated_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::keyboardSpeed,HX_HCSTRING("keyboardSpeed","\x60","\x0d","\x3d","\x55")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::mouseSpeed,HX_HCSTRING("mouseSpeed","\x22","\x8b","\x36","\x9f")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::minPitchDegrees,HX_HCSTRING("minPitchDegrees","\x79","\xb8","\x40","\xa1")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::maxPitchDegrees,HX_HCSTRING("maxPitchDegrees","\x8b","\x04","\x5b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String VrInterfaceEmulated_obj_sMemberFields[] = {
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98"),
	HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e"),
	HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4"),
	HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9"),
	HX_HCSTRING("degreesToRadians","\x90","\x4d","\x9c","\x1b"),
	HX_HCSTRING("updateOrientation","\x47","\x9b","\x68","\x62"),
	HX_HCSTRING("buttonEvent","\xc8","\x88","\x6f","\xc3"),
	HX_HCSTRING("axisEvent","\xb9","\xb3","\x68","\xcf"),
	HX_HCSTRING("keyDownEvent","\xb9","\x46","\xa3","\x63"),
	HX_HCSTRING("keyUpEvent","\xe0","\x87","\xc1","\x40"),
	HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6"),
	HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6"),
	HX_HCSTRING("mouseMoveEvent","\x64","\xf4","\x69","\xc5"),
	HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd"),
	HX_HCSTRING("mouseButtonDownEvent","\x61","\xef","\xe3","\x10"),
	HX_HCSTRING("mouseButtonUpEvent","\x88","\x36","\x3b","\x99"),
	HX_HCSTRING("GetSensorState","\xa1","\x48","\x5a","\xfc"),
	HX_HCSTRING("GetPredictedSensorState","\x35","\xf0","\x7f","\x13"),
	HX_HCSTRING("WarpSwapBlack","\xa4","\x2a","\x05","\xee"),
	HX_HCSTRING("WarpSwapLoadingIcon","\xba","\x5e","\xab","\x92"),
	HX_HCSTRING("WarpSwap","\x1b","\x39","\x8e","\x7a"),
	HX_HCSTRING("GetTimeInSeconds","\xf7","\x28","\x50","\xb5"),
	HX_HCSTRING("vb","\x2c","\x67","\x00","\x00"),
	HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),
	HX_HCSTRING("pipeline","\x22","\xbb","\x83","\x4b"),
	HX_HCSTRING("setVertex","\xa6","\x50","\xef","\x00"),
	::String(null()) };

static void VrInterfaceEmulated_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::keyboardSpeed,"keyboardSpeed");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::mouseSpeed,"mouseSpeed");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::minPitchDegrees,"minPitchDegrees");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::maxPitchDegrees,"maxPitchDegrees");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VrInterfaceEmulated_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::keyboardSpeed,"keyboardSpeed");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::mouseSpeed,"mouseSpeed");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::minPitchDegrees,"minPitchDegrees");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::maxPitchDegrees,"maxPitchDegrees");
};

#endif

hx::Class VrInterfaceEmulated_obj::__mClass;

static ::String VrInterfaceEmulated_obj_sStaticFields[] = {
	HX_HCSTRING("keyboardSpeed","\x60","\x0d","\x3d","\x55"),
	HX_HCSTRING("mouseSpeed","\x22","\x8b","\x36","\x9f"),
	HX_HCSTRING("minPitchDegrees","\x79","\xb8","\x40","\xa1"),
	HX_HCSTRING("maxPitchDegrees","\x8b","\x04","\x5b","\x45"),
	::String(null())
};

void VrInterfaceEmulated_obj::__register()
{
	hx::Object *dummy = new VrInterfaceEmulated_obj;
	VrInterfaceEmulated_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.VrInterfaceEmulated","\x06","\x4d","\x1c","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VrInterfaceEmulated_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(VrInterfaceEmulated_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VrInterfaceEmulated_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VrInterfaceEmulated_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VrInterfaceEmulated_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VrInterfaceEmulated_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VrInterfaceEmulated_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VrInterfaceEmulated_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_46_boot)
HXDLIN(  46)		keyboardSpeed = ((Float)2.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_48_boot)
HXDLIN(  48)		mouseSpeed = ((Float)0.1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_50_boot)
HXDLIN(  50)		minPitchDegrees = ((Float)-80);
            	}
{
            	HX_STACKFRAME(&_hx_pos_850eac6dcb44ccbe_51_boot)
HXDLIN(  51)		maxPitchDegrees = ((Float)80);
            	}
}

} // end namespace kha
} // end namespace vr
