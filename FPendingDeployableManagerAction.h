// ScriptStruct /Script/FortniteGame.PendingDeployableManagerAction
// Size: 0x40
struct FPendingDeployableManagerAction
{
	enum EQueueActionType ActionType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<class ADeployableBasePlot*> PendingPlots; // 0x8 (0x10)
	int CurrentPlotRunningIndex; // 0x18 (0x4)
	enum EDeployableBaseBuildingState DesiredPlotState; // 0x1c (0x1)
	unsigned char unreflected_1d[0x13]; // 0x1d (0x13) 
	class AFortDeployableBaseManager* Manager; // 0x30 (0x8)
	unsigned char padding_38[0x8]; // 0x38 (0x8)
};

