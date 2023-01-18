// ScriptStruct /Script/FortniteGame.SavedSpectatorCameraShot
// Size: 0x220
struct FSavedSpectatorCameraShot
{
	struct FSavedSpectatorCameraState CameraState; // 0x0 (0x1d0)
	bool bIsShotStart; // 0x1d0 (0x1)
	unsigned char unreflected_1d1[0x3]; // 0x1d1 (0x3) 
	float Timestamp; // 0x1d4 (0x4)
	float ShotLength; // 0x1d8 (0x4)
	unsigned char unreflected_1dc[0x4]; // 0x1dc (0x4) 
	struct FString message; // 0x1e0 (0x10)
	struct FText LocalisedMessage; // 0x1f0 (0x18)
	enum ECameraShotNotificationTypes NotificationType; // 0x208 (0x1)
	unsigned char unreflected_209[0x3]; // 0x209 (0x3) 
	struct FNotificationUISettings* MessageUISettings; // 0x20c (0x8)
	unsigned char padding_214[0xc]; // 0x214 (0xc)
};

