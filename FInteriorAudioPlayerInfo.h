// ScriptStruct /Script/FortniteGame.InteriorAudioPlayerInfo
// Size: 0x120
struct FInteriorAudioPlayerInfo
{
	enum EInteriorAudioState CurrentState; // 0x1 (0x1)
	unsigned char unreflected_2[0x4e]; // 0x2 (0x4e) 
	struct FGameplayTag CurrentRoomSizeTag; // 0x50 (0x4)
	unsigned char unreflected_54[0xc]; // 0x54 (0xc) 
	class UAmbientAudioDataAsset* CurrentAmbientBank; // 0x60 (0x8)
	class UAmbientAudioDataAsset* PreviousAmbientBank; // 0x68 (0x8)
	struct TMap<enum EInteriorAudioBuildingDirection, struct FInteriorAudioDirectionScanInfo> Directions; // 0x70 (0x50)
	struct TMap<enum EStructuralWallPosition, struct TWeakObjectPtr<class ABuildingSMActor>> StartingWalls; // 0xc0 (0x50)
	struct TWeakObjectPtr<class ABuildingSMActor> CenterCellActor; // 0x110 (0x8)
	enum EInteriorAudioQuadrant Quadrant; // 0x118 (0x1)
	unsigned char padding_119[0x7]; // 0x119 (0x7)
};

