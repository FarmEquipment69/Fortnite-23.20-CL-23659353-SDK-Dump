// ScriptStruct /Script/FortniteUI.DiscoCaptureUIData
// Size: 0x40
struct FDiscoCaptureUIData
{
	enum EDiscoCaptureUIState CurrDisplayState; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class AAthenaCapturePoint* CapturePoint; // 0x8 (0x8)
	class AFortPlayerPawnAthena* CurrPawn; // 0x10 (0x8)
	class UMaterialInstanceDynamic* CurrMID; // 0x18 (0x8)
	float FillAmount; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FText DisplayText; // 0x28 (0x18)
};

