// BlueprintGeneratedClass /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C
// Size: 0x388
class AB_CameraLens_Geyser_C : public AEmitterCameraLensEffectBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x370 (0x8)
	float Timeline0Alpha3D5AA2144E9B8D6D3B409B845315B143; // 0x378 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0Direction3D5AA2144E9B8D6D3B409B845315B143; // 0x37c (0x1)
	unsigned char unreflected_37d[0x3]; // 0x37d (0x3) 
	class UTimelineComponent* Timeline0; // 0x380 (0x8)

	/* Functions */

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser (Has no native function)
	void ExecuteUbergraphBCameraLensGeyser(int& EntryPoint, int& CallFuncGetRenderingDetailModeReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue); // (Final | 0x00008000)
};

