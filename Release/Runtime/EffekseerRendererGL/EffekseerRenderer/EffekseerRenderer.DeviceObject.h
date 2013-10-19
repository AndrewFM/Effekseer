
#ifndef	__EFFEKSEERRENDERER_DEVICEOBJECT_H__
#define	__EFFEKSEERRENDERER_DEVICEOBJECT_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "EffekseerRenderer.RendererImplemented.h"

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace EffekseerRenderer
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
/**
	@brief	デバイスによって生成されるオブジェクト
*/
class DeviceObject
{
private:
	RendererImplemented*	m_renderer;

public:
		DeviceObject( RendererImplemented* renderer );
		virtual ~DeviceObject();

	public:
		virtual void OnLostDevice() = 0;
		virtual void OnResetDevice() = 0;

		RendererImplemented* GetRenderer() const;
};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERRENDERER_DEVICEOBJECT_H__