
#ifndef	__EFFEKSEERRENDERER_RENDERSTATE_H__
#define	__EFFEKSEERRENDERER_RENDERSTATE_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "../../EffekseerRendererCommon/EffekseerRenderer.RenderStateBase.h"
#include "EffekseerRenderer.Base.h"

//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
namespace EffekseerRenderer
{
//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
class RenderState
	: public RenderStateBase
{
private:
	 RendererImplemented*	m_renderer;
public:
	RenderState( RendererImplemented* renderer );
	virtual ~RenderState();

	void Update( bool forced );
};

//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
}
//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
#endif	// __EFFEKSEERRENDERER_RENDERSTATE_H__