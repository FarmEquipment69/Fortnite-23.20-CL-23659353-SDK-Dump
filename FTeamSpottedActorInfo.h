// ScriptStruct /Script/FortniteGame.TeamSpottedActorInfo
// Size: 0x20
struct FTeamSpottedActorInfo : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortPlayerController* Spotter; // 0x10 (0x8)
	class AActor* SpottedActor; // 0x18 (0x8)
};

