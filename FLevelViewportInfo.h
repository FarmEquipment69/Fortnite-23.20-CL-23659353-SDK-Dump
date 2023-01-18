// ScriptStruct /Script/Engine.LevelViewportInfo
// Size: 0x38
struct FLevelViewportInfo
{
	struct FVector CamPosition; // 0x0 (0x18)
	struct FRotator CamRotation; // 0x18 (0x18)
	float CamOrthoZoom; // 0x30 (0x4)
	bool CamUpdated; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};

