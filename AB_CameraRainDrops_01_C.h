// BlueprintGeneratedClass /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C
// Size: 0x388
class AB_CameraRainDrops_01_C : public AEmitterCameraLensEffectBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x370 (0x8)
	float AlphaAlpha06897833405CC2B231B02C93C4E725A3; // 0x378 (0x4)
	struct TEnumAsByte<ETimelineDirection> AlphaDirection06897833405CC2B231B02C93C4E725A3; // 0x37c (0x1)
	unsigned char unreflected_37d[0x3]; // 0x37d (0x3) 
	class UTimelineComponent* Alpha; // 0x380 (0x8)

	/* Functions */

	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc (Has no native function)
	void AlphaFinishedFunc(); // (BlueprintEvent)

	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc (Has no native function)
	void AlphaUpdateFunc(); // (BlueprintEvent)

	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01 (Has no native function)
	void ExecuteUbergraphBCameraRainDrops01(int& EntryPoint, int& CallFuncGetRenderingDetailModeReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue); // (Final | 0x00008000)
};

