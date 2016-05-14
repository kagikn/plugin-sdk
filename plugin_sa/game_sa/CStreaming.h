#pragma once

#include "plbase/PluginBase.h"
#include "CVector.h"
#include "RenderWare.h"

class PLUGIN_API CStreaming
{
public:
    static int &ms_currentZoneType;
    static unsigned int &ms_streamingBufferSize;
    static unsigned int &ms_memoryUsed;
    static unsigned int &ms_numModelsRequested;
    static bool &ms_disableStreaming;

	static void ImGonnaUseStreamingMemory();
	static void IHaveUsedStreamingMemory();
	static void MakeSpaceFor(unsigned int size);

    static void DisableCopBikes(bool bDisable);
    static unsigned int GetDefaultMedicModel();
    static unsigned int GetDefaultAmbulanceModel();
    static unsigned int GetDefaultFiremanModel();
    static unsigned int GetDefaultFireEngineModel();
    static unsigned int GetDefaultCopModel();
    static unsigned int GetDefaultCopCarModel(unsigned int arg0);
    static void LoadAllRequestedModels(bool bOnlyQuickRequests);
    // Used for player clothes
    static void LoadRequestedModels();

    static void RemoveAllUnusedModels();
    static void RemoveModel(int modelIndex);
    static void RequestModel(int modelIndex, int flags);
    static void SetModelIsDeletable(int modelIndex);
    static void SetMissionDoesntRequireModel(int modelIndex);
    static void LoadScene(CVector const& point);
    static void LoadSceneCollision(CVector const& coord);
};