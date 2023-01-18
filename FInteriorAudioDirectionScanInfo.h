// ScriptStruct /Script/FortniteGame.InteriorAudioDirectionScanInfo
// Size: 0xc0
struct FInteriorAudioDirectionScanInfo
{
	struct FInteriorAudioBuildingInfo Building; // 0x0 (0x50)
	unsigned char unreflected_50[0x60]; // 0x50 (0x60) 
	class UAudioComponent* SourceBusComponent; // 0xb0 (0x8)
	struct TWeakObjectPtr<class ABuildingSMActor> SourceBusActor; // 0xb8 (0x8)
};

