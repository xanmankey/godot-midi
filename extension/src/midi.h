#ifndef MIDI_CLASS_H
#define MIDI_CLASS_H

// We don't need windows.h in this plugin but many others do and it throws up on itself all the time
// So best to include it and make sure CI warns us when we use something Microsoft took for their own goals....
#ifdef WIN32
#include <windows.h>
#endif

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>

using namespace godot;

class MIDI : public RefCounted
{
    GDCLASS(MIDI, RefCounted);

protected:
    static void _bind_methods();

public:
    MIDI();
    ~MIDI();

    Animation load_from_file(String file_path);
};

#endif // MIDI_CLASS_H