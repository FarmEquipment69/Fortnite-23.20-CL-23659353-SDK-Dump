// ScriptStruct /Script/LiveLinkInterface.SubjectMetadata
// Size: 0x70
struct FSubjectMetadata
{
	struct TMap<struct FName, struct FString> StringMetaData; // 0x0 (0x50)
	struct FTimecode SceneTimecode; // 0x50 (0x14)
	struct FFrameRate* SceneFramerate; // 0x64 (0x8)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

