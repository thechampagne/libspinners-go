package spinner

// #include <stdlib.h>
import "C"
import (
	"unsafe"
	"github.com/thechampagne/libspinners-go/raw"
)

type Spinners = raw.Spinner_spinners_t

const (
	Dots Spinners = iota
	Dots2
	Dots3
	Dots4
	Dots5
	Dots6
	Dots7
	Dots8
	Dots9
	Dots10
	Dots11
	Dots12
	Dots8Bit
	Line
	Line2
	Pipe
	SimpleDots
	SimpleDotsScrolling
	Star
	Star2
	Flip
	Hamburger
	GrowVertical
	GrowHorizontal
	Balloon
	Balloon2
	Noise
	Bounce
	BoxBounce
	BoxBounce2
	Triangle
	Arc
	Circle
	SquareCorners
	CircleQuarters
	CircleHalves
	Squish
	Toggle
	Toggle2
	Toggle3
	Toggle4
	Toggle5
	Toggle6
	Toggle7
	Toggle8
	Toggle9
	Toggle10
	Toggle11
	Toggle12
	Toggle13
	Arrow
	Arrow2
	Arrow3
	BouncingBar
	BouncingBall
	Smiley
	Monkey
	Hearts
	Clock
	Earth
	Material
	Moon
	Runner
	Pong
	Shark
	Dqpb
	Weather
	Christmas
	Grenade
	Point
	Layer
	BetaWave
	FingerDance
	FistBump
	SoccerHeader
	Mindblown
	Speaker
	OrangePulse
	BluePulse
	OrangeBluePulse
	TimeTravel
	Aesthetic
)

type Spinner struct {
	spinner raw.Spinner_t
}

func New(spinner Spinners, message string) Spinner {
	cstr := C.CString(message)
	defer C.free(unsafe.Pointer(cstr))
	spin := raw.Spinner_new(spinner, (raw.Cstring)(cstr))
	return Spinner {
		spin,
	}
}

func NewWithTimer(spinner Spinners, message string) Spinner {
	cstr := C.CString(message)
	defer C.free(unsafe.Pointer(cstr))
	spin := raw.Spinner_new_with_timer(spinner, (raw.Cstring)(cstr))
	return Spinner {
		spin,
	}
}

func (s *Spinner) Stop() {
	raw.Spinner_stop(&s.spinner)
}

func (s *Spinner) StopWithSymbol(symbol string) {
	cstr := C.CString(symbol)
	defer C.free(unsafe.Pointer(cstr))
	raw.Spinner_stop_with_symbol(&s.spinner, (raw.Cstring)(cstr))
}

func (s *Spinner) StopWithNewline() {
	raw.Spinner_stop_with_newline(&s.spinner)
}

func (s *Spinner) StopWithMessage(msg string) {
	cstr := C.CString(msg)
	defer C.free(unsafe.Pointer(cstr))
	raw.Spinner_stop_with_message(&s.spinner, (raw.Cstring)(cstr))
}

func (s *Spinner) StopAndPersist(symbol string, msg string) {
	cstr := C.CString(symbol)
	cstr1 := C.CString(msg)
	defer C.free(unsafe.Pointer(cstr))
	defer C.free(unsafe.Pointer(cstr1))
	raw.Spinner_stop_and_persist(&s.spinner, (raw.Cstring)(cstr), (raw.Cstring)(cstr1))
}

func (s *Spinner) Clean() {
	raw.Spinner_clean(&s.spinner)
}
