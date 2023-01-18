// ScriptStruct /Script/Engine.NavAgentProperties
// Size: 0x30
struct FNavAgentProperties : FMovementProperties
{
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float AgentRadius; // 0x4 (0x4)
	float AgentHeight; // 0x8 (0x4)
	float AgentStepHeight; // 0xc (0x4)
	float NavWalkingSearchHeightScale; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FSoftClassPath PreferredNavData; // 0x18 (0x18)
};

