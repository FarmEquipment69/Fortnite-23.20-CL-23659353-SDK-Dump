// ScriptStruct /Script/FortniteGame.FortWorldMarkerContainer
// Size: 0x128
struct FFortWorldMarkerContainer : FFastArraySerializer
{
	struct TArray<struct FFortWorldMarkerData> Markers; // 0x108 (0x10)
	class UAthenaMarkerComponent* OwningComponent; // 0x118 (0x8)
	unsigned char padding_120[0x8]; // 0x120 (0x8)
};

