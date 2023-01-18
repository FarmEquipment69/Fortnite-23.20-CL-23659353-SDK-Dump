// ScriptStruct /Script/FortniteGame.ClipInfo
// Size: 0x310
struct FClipInfo
{
	float StartTimestamp; // 0x0 (0x4)
	float Duration; // 0x4 (0x4)
	struct FUniqueNetIdRepl PlayerId; // 0x8 (0x30)
	struct FString S3KeyName; // 0x38 (0x10)
	struct FString S3Bucket; // 0x48 (0x10)
	struct FString DatabaseId; // 0x58 (0x10)
	struct FString DatabaseParitionKey; // 0x68 (0x10)
	enum ESpectatorCameraType CameraType; // 0x78 (0x1)
	enum EClipMessageSettings MessageSettings; // 0x79 (0x1)
	enum ECameraShotNotificationTypes MessageNotificationType; // 0x7a (0x1)
	unsigned char unreflected_7b[0x1]; // 0x7b (0x1) 
	float MessageDisplayTime; // 0x7c (0x4)
	struct FString MessageString; // 0x80 (0x10)
	struct TMap<enum EHighlightFeatures, float> FeatureScores; // 0x90 (0x50)
	struct FString PlayerName; // 0xe0 (0x10)
	struct FSavedSpectatorCameraShot CameraShotPrefab; // 0xf0 (0x220)
};

