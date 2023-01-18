// ScriptStruct /Script/FortniteUI.DiscoCaptureIconData
// Size: 0x10
struct FDiscoCaptureIconData
{
	enum EDiscoCaptureIconState CurrIconState; // 0x0 (0x1)
	enum EDiscoCaptureProgressState CurrProgressState; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float CurrCapturePercent; // 0x4 (0x4)
	class AAthenaCapturePoint* CapturePoint; // 0x8 (0x8)
};

