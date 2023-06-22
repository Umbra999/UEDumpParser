// Class ActorSequence.ActorSequence
// Size: 0x2d0 (Inherited: 0x2a8)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x2a8(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x2b0(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x108 (Inherited: 0xc8)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xc8(0x28)
	struct UActorSequence* Sequence; // 0xf0(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0xf8(0x08)
	bool bAutoPlay; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x608 (Inherited: 0x608)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

