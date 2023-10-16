// This file was generated by qtwaylandscanner
// source file is ../3rdparty/protocol/tablet-unstable-v2.xml

#ifndef QT_WAYLAND_TABLET_UNSTABLE_V2
#define QT_WAYLAND_TABLET_UNSTABLE_V2

#include <QtWaylandClient/private/wayland-tablet-unstable-v2-client-protocol.h>
#include <QByteArray>
#include <QString>

struct wl_registry;

QT_BEGIN_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_GCC("-Wmissing-field-initializers")

#if !defined(Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT)
#  if defined(QT_SHARED)
#    define Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT Q_DECL_EXPORT
#  else
#    define Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT
#  endif
#endif

namespace QtWayland {
    class Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT zwp_tablet_manager_v2
    {
    public:
        zwp_tablet_manager_v2(struct ::wl_registry *registry, int id, int version);
        zwp_tablet_manager_v2(struct ::zwp_tablet_manager_v2 *object);
        zwp_tablet_manager_v2();

        virtual ~zwp_tablet_manager_v2();

        void init(struct ::wl_registry *registry, int id, int version);
        void init(struct ::zwp_tablet_manager_v2 *object);

        struct ::zwp_tablet_manager_v2 *object() { return m_zwp_tablet_manager_v2; }
        const struct ::zwp_tablet_manager_v2 *object() const { return m_zwp_tablet_manager_v2; }
        static zwp_tablet_manager_v2 *fromObject(struct ::zwp_tablet_manager_v2 *object);

        bool isInitialized() const;

        static const struct ::wl_interface *interface();

        struct ::zwp_tablet_seat_v2 *get_tablet_seat(struct ::wl_seat *seat);
        void destroy();

    private:
        struct ::zwp_tablet_manager_v2 *m_zwp_tablet_manager_v2;
    };

    class Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT zwp_tablet_seat_v2
    {
    public:
        zwp_tablet_seat_v2(struct ::wl_registry *registry, int id, int version);
        zwp_tablet_seat_v2(struct ::zwp_tablet_seat_v2 *object);
        zwp_tablet_seat_v2();

        virtual ~zwp_tablet_seat_v2();

        void init(struct ::wl_registry *registry, int id, int version);
        void init(struct ::zwp_tablet_seat_v2 *object);

        struct ::zwp_tablet_seat_v2 *object() { return m_zwp_tablet_seat_v2; }
        const struct ::zwp_tablet_seat_v2 *object() const { return m_zwp_tablet_seat_v2; }
        static zwp_tablet_seat_v2 *fromObject(struct ::zwp_tablet_seat_v2 *object);

        bool isInitialized() const;

        static const struct ::wl_interface *interface();

        void destroy();

    protected:
        virtual void zwp_tablet_seat_v2_tablet_added(struct ::zwp_tablet_v2 *id);
        virtual void zwp_tablet_seat_v2_tool_added(struct ::zwp_tablet_tool_v2 *id);
        virtual void zwp_tablet_seat_v2_pad_added(struct ::zwp_tablet_pad_v2 *id);

    private:
        void init_listener();
        static const struct zwp_tablet_seat_v2_listener m_zwp_tablet_seat_v2_listener;
        static void handle_tablet_added(
            void *data,
            struct ::zwp_tablet_seat_v2 *object,
            struct ::zwp_tablet_v2 *id);
        static void handle_tool_added(
            void *data,
            struct ::zwp_tablet_seat_v2 *object,
            struct ::zwp_tablet_tool_v2 *id);
        static void handle_pad_added(
            void *data,
            struct ::zwp_tablet_seat_v2 *object,
            struct ::zwp_tablet_pad_v2 *id);
        struct ::zwp_tablet_seat_v2 *m_zwp_tablet_seat_v2;
    };

    class Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT zwp_tablet_tool_v2
    {
    public:
        zwp_tablet_tool_v2(struct ::wl_registry *registry, int id, int version);
        zwp_tablet_tool_v2(struct ::zwp_tablet_tool_v2 *object);
        zwp_tablet_tool_v2();

        virtual ~zwp_tablet_tool_v2();

        void init(struct ::wl_registry *registry, int id, int version);
        void init(struct ::zwp_tablet_tool_v2 *object);

        struct ::zwp_tablet_tool_v2 *object() { return m_zwp_tablet_tool_v2; }
        const struct ::zwp_tablet_tool_v2 *object() const { return m_zwp_tablet_tool_v2; }
        static zwp_tablet_tool_v2 *fromObject(struct ::zwp_tablet_tool_v2 *object);

        bool isInitialized() const;

        static const struct ::wl_interface *interface();

        enum type {
            type_pen = 0x140, // Pen
            type_eraser = 0x141, // Eraser
            type_brush = 0x142, // Brush
            type_pencil = 0x143, // Pencil
            type_airbrush = 0x144, // Airbrush
            type_finger = 0x145, // Finger
            type_mouse = 0x146, // Mouse
            type_lens = 0x147, // Lens
        };

        enum capability {
            capability_tilt = 1, // Tilt axes
            capability_pressure = 2, // Pressure axis
            capability_distance = 3, // Distance axis
            capability_rotation = 4, // Z-rotation axis
            capability_slider = 5, // Slider axis
            capability_wheel = 6, // Wheel axis
        };

        enum button_state {
            button_state_released = 0, // button is not pressed
            button_state_pressed = 1, // button is pressed
        };

        enum error {
            error_role = 0, // given wl_surface has another role
        };

        void set_cursor(uint32_t serial, struct ::wl_surface *surface, int32_t hotspot_x, int32_t hotspot_y);
        void destroy();

    protected:
        virtual void zwp_tablet_tool_v2_type(uint32_t tool_type);
        virtual void zwp_tablet_tool_v2_hardware_serial(uint32_t hardware_serial_hi, uint32_t hardware_serial_lo);
        virtual void zwp_tablet_tool_v2_hardware_id_wacom(uint32_t hardware_id_hi, uint32_t hardware_id_lo);
        virtual void zwp_tablet_tool_v2_capability(uint32_t capability);
        virtual void zwp_tablet_tool_v2_done();
        virtual void zwp_tablet_tool_v2_removed();
        virtual void zwp_tablet_tool_v2_proximity_in(uint32_t serial, struct ::zwp_tablet_v2 *tablet, struct ::wl_surface *surface);
        virtual void zwp_tablet_tool_v2_proximity_out();
        virtual void zwp_tablet_tool_v2_down(uint32_t serial);
        virtual void zwp_tablet_tool_v2_up();
        virtual void zwp_tablet_tool_v2_motion(wl_fixed_t x, wl_fixed_t y);
        virtual void zwp_tablet_tool_v2_pressure(uint32_t pressure);
        virtual void zwp_tablet_tool_v2_distance(uint32_t distance);
        virtual void zwp_tablet_tool_v2_tilt(wl_fixed_t tilt_x, wl_fixed_t tilt_y);
        virtual void zwp_tablet_tool_v2_rotation(wl_fixed_t degrees);
        virtual void zwp_tablet_tool_v2_slider(int32_t position);
        virtual void zwp_tablet_tool_v2_wheel(wl_fixed_t degrees, int32_t clicks);
        virtual void zwp_tablet_tool_v2_button(uint32_t serial, uint32_t button, uint32_t state);
        virtual void zwp_tablet_tool_v2_frame(uint32_t time);

    private:
        void init_listener();
        static const struct zwp_tablet_tool_v2_listener m_zwp_tablet_tool_v2_listener;
        static void handle_type(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t tool_type);
        static void handle_hardware_serial(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t hardware_serial_hi,
            uint32_t hardware_serial_lo);
        static void handle_hardware_id_wacom(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t hardware_id_hi,
            uint32_t hardware_id_lo);
        static void handle_capability(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t capability);
        static void handle_done(
            void *data,
            struct ::zwp_tablet_tool_v2 *object);
        static void handle_removed(
            void *data,
            struct ::zwp_tablet_tool_v2 *object);
        static void handle_proximity_in(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t serial,
            struct ::zwp_tablet_v2 *tablet,
            struct ::wl_surface *surface);
        static void handle_proximity_out(
            void *data,
            struct ::zwp_tablet_tool_v2 *object);
        static void handle_down(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t serial);
        static void handle_up(
            void *data,
            struct ::zwp_tablet_tool_v2 *object);
        static void handle_motion(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            wl_fixed_t x,
            wl_fixed_t y);
        static void handle_pressure(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t pressure);
        static void handle_distance(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t distance);
        static void handle_tilt(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            wl_fixed_t tilt_x,
            wl_fixed_t tilt_y);
        static void handle_rotation(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            wl_fixed_t degrees);
        static void handle_slider(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            int32_t position);
        static void handle_wheel(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            wl_fixed_t degrees,
            int32_t clicks);
        static void handle_button(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t serial,
            uint32_t button,
            uint32_t state);
        static void handle_frame(
            void *data,
            struct ::zwp_tablet_tool_v2 *object,
            uint32_t time);
        struct ::zwp_tablet_tool_v2 *m_zwp_tablet_tool_v2;
    };

    class Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT zwp_tablet_v2
    {
    public:
        zwp_tablet_v2(struct ::wl_registry *registry, int id, int version);
        zwp_tablet_v2(struct ::zwp_tablet_v2 *object);
        zwp_tablet_v2();

        virtual ~zwp_tablet_v2();

        void init(struct ::wl_registry *registry, int id, int version);
        void init(struct ::zwp_tablet_v2 *object);

        struct ::zwp_tablet_v2 *object() { return m_zwp_tablet_v2; }
        const struct ::zwp_tablet_v2 *object() const { return m_zwp_tablet_v2; }
        static zwp_tablet_v2 *fromObject(struct ::zwp_tablet_v2 *object);

        bool isInitialized() const;

        static const struct ::wl_interface *interface();

        void destroy();

    protected:
        virtual void zwp_tablet_v2_name(const QString &name);
        virtual void zwp_tablet_v2_id(uint32_t vid, uint32_t pid);
        virtual void zwp_tablet_v2_path(const QString &path);
        virtual void zwp_tablet_v2_done();
        virtual void zwp_tablet_v2_removed();

    private:
        void init_listener();
        static const struct zwp_tablet_v2_listener m_zwp_tablet_v2_listener;
        static void handle_name(
            void *data,
            struct ::zwp_tablet_v2 *object,
            const char *name);
        static void handle_id(
            void *data,
            struct ::zwp_tablet_v2 *object,
            uint32_t vid,
            uint32_t pid);
        static void handle_path(
            void *data,
            struct ::zwp_tablet_v2 *object,
            const char *path);
        static void handle_done(
            void *data,
            struct ::zwp_tablet_v2 *object);
        static void handle_removed(
            void *data,
            struct ::zwp_tablet_v2 *object);
        struct ::zwp_tablet_v2 *m_zwp_tablet_v2;
    };

    class Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT zwp_tablet_pad_ring_v2
    {
    public:
        zwp_tablet_pad_ring_v2(struct ::wl_registry *registry, int id, int version);
        zwp_tablet_pad_ring_v2(struct ::zwp_tablet_pad_ring_v2 *object);
        zwp_tablet_pad_ring_v2();

        virtual ~zwp_tablet_pad_ring_v2();

        void init(struct ::wl_registry *registry, int id, int version);
        void init(struct ::zwp_tablet_pad_ring_v2 *object);

        struct ::zwp_tablet_pad_ring_v2 *object() { return m_zwp_tablet_pad_ring_v2; }
        const struct ::zwp_tablet_pad_ring_v2 *object() const { return m_zwp_tablet_pad_ring_v2; }
        static zwp_tablet_pad_ring_v2 *fromObject(struct ::zwp_tablet_pad_ring_v2 *object);

        bool isInitialized() const;

        static const struct ::wl_interface *interface();

        enum source {
            source_finger = 1, // finger
        };

        void set_feedback(const QString &description, uint32_t serial);
        void destroy();

    protected:
        virtual void zwp_tablet_pad_ring_v2_source(uint32_t source);
        virtual void zwp_tablet_pad_ring_v2_angle(wl_fixed_t degrees);
        virtual void zwp_tablet_pad_ring_v2_stop();
        virtual void zwp_tablet_pad_ring_v2_frame(uint32_t time);

    private:
        void init_listener();
        static const struct zwp_tablet_pad_ring_v2_listener m_zwp_tablet_pad_ring_v2_listener;
        static void handle_source(
            void *data,
            struct ::zwp_tablet_pad_ring_v2 *object,
            uint32_t source);
        static void handle_angle(
            void *data,
            struct ::zwp_tablet_pad_ring_v2 *object,
            wl_fixed_t degrees);
        static void handle_stop(
            void *data,
            struct ::zwp_tablet_pad_ring_v2 *object);
        static void handle_frame(
            void *data,
            struct ::zwp_tablet_pad_ring_v2 *object,
            uint32_t time);
        struct ::zwp_tablet_pad_ring_v2 *m_zwp_tablet_pad_ring_v2;
    };

    class Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT zwp_tablet_pad_strip_v2
    {
    public:
        zwp_tablet_pad_strip_v2(struct ::wl_registry *registry, int id, int version);
        zwp_tablet_pad_strip_v2(struct ::zwp_tablet_pad_strip_v2 *object);
        zwp_tablet_pad_strip_v2();

        virtual ~zwp_tablet_pad_strip_v2();

        void init(struct ::wl_registry *registry, int id, int version);
        void init(struct ::zwp_tablet_pad_strip_v2 *object);

        struct ::zwp_tablet_pad_strip_v2 *object() { return m_zwp_tablet_pad_strip_v2; }
        const struct ::zwp_tablet_pad_strip_v2 *object() const { return m_zwp_tablet_pad_strip_v2; }
        static zwp_tablet_pad_strip_v2 *fromObject(struct ::zwp_tablet_pad_strip_v2 *object);

        bool isInitialized() const;

        static const struct ::wl_interface *interface();

        enum source {
            source_finger = 1, // finger
        };

        void set_feedback(const QString &description, uint32_t serial);
        void destroy();

    protected:
        virtual void zwp_tablet_pad_strip_v2_source(uint32_t source);
        virtual void zwp_tablet_pad_strip_v2_position(uint32_t position);
        virtual void zwp_tablet_pad_strip_v2_stop();
        virtual void zwp_tablet_pad_strip_v2_frame(uint32_t time);

    private:
        void init_listener();
        static const struct zwp_tablet_pad_strip_v2_listener m_zwp_tablet_pad_strip_v2_listener;
        static void handle_source(
            void *data,
            struct ::zwp_tablet_pad_strip_v2 *object,
            uint32_t source);
        static void handle_position(
            void *data,
            struct ::zwp_tablet_pad_strip_v2 *object,
            uint32_t position);
        static void handle_stop(
            void *data,
            struct ::zwp_tablet_pad_strip_v2 *object);
        static void handle_frame(
            void *data,
            struct ::zwp_tablet_pad_strip_v2 *object,
            uint32_t time);
        struct ::zwp_tablet_pad_strip_v2 *m_zwp_tablet_pad_strip_v2;
    };

    class Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT zwp_tablet_pad_group_v2
    {
    public:
        zwp_tablet_pad_group_v2(struct ::wl_registry *registry, int id, int version);
        zwp_tablet_pad_group_v2(struct ::zwp_tablet_pad_group_v2 *object);
        zwp_tablet_pad_group_v2();

        virtual ~zwp_tablet_pad_group_v2();

        void init(struct ::wl_registry *registry, int id, int version);
        void init(struct ::zwp_tablet_pad_group_v2 *object);

        struct ::zwp_tablet_pad_group_v2 *object() { return m_zwp_tablet_pad_group_v2; }
        const struct ::zwp_tablet_pad_group_v2 *object() const { return m_zwp_tablet_pad_group_v2; }
        static zwp_tablet_pad_group_v2 *fromObject(struct ::zwp_tablet_pad_group_v2 *object);

        bool isInitialized() const;

        static const struct ::wl_interface *interface();

        void destroy();

    protected:
        virtual void zwp_tablet_pad_group_v2_buttons(wl_array *buttons);
        virtual void zwp_tablet_pad_group_v2_ring(struct ::zwp_tablet_pad_ring_v2 *ring);
        virtual void zwp_tablet_pad_group_v2_strip(struct ::zwp_tablet_pad_strip_v2 *strip);
        virtual void zwp_tablet_pad_group_v2_modes(uint32_t modes);
        virtual void zwp_tablet_pad_group_v2_done();
        virtual void zwp_tablet_pad_group_v2_mode_switch(uint32_t time, uint32_t serial, uint32_t mode);

    private:
        void init_listener();
        static const struct zwp_tablet_pad_group_v2_listener m_zwp_tablet_pad_group_v2_listener;
        static void handle_buttons(
            void *data,
            struct ::zwp_tablet_pad_group_v2 *object,
            wl_array *buttons);
        static void handle_ring(
            void *data,
            struct ::zwp_tablet_pad_group_v2 *object,
            struct ::zwp_tablet_pad_ring_v2 *ring);
        static void handle_strip(
            void *data,
            struct ::zwp_tablet_pad_group_v2 *object,
            struct ::zwp_tablet_pad_strip_v2 *strip);
        static void handle_modes(
            void *data,
            struct ::zwp_tablet_pad_group_v2 *object,
            uint32_t modes);
        static void handle_done(
            void *data,
            struct ::zwp_tablet_pad_group_v2 *object);
        static void handle_mode_switch(
            void *data,
            struct ::zwp_tablet_pad_group_v2 *object,
            uint32_t time,
            uint32_t serial,
            uint32_t mode);
        struct ::zwp_tablet_pad_group_v2 *m_zwp_tablet_pad_group_v2;
    };

    class Q_WAYLAND_CLIENT_TABLET_UNSTABLE_V2_EXPORT zwp_tablet_pad_v2
    {
    public:
        zwp_tablet_pad_v2(struct ::wl_registry *registry, int id, int version);
        zwp_tablet_pad_v2(struct ::zwp_tablet_pad_v2 *object);
        zwp_tablet_pad_v2();

        virtual ~zwp_tablet_pad_v2();

        void init(struct ::wl_registry *registry, int id, int version);
        void init(struct ::zwp_tablet_pad_v2 *object);

        struct ::zwp_tablet_pad_v2 *object() { return m_zwp_tablet_pad_v2; }
        const struct ::zwp_tablet_pad_v2 *object() const { return m_zwp_tablet_pad_v2; }
        static zwp_tablet_pad_v2 *fromObject(struct ::zwp_tablet_pad_v2 *object);

        bool isInitialized() const;

        static const struct ::wl_interface *interface();

        enum button_state {
            button_state_released = 0, // the button is not pressed
            button_state_pressed = 1, // the button is pressed
        };

        void set_feedback(uint32_t button, const QString &description, uint32_t serial);
        void destroy();

    protected:
        virtual void zwp_tablet_pad_v2_group(struct ::zwp_tablet_pad_group_v2 *pad_group);
        virtual void zwp_tablet_pad_v2_path(const QString &path);
        virtual void zwp_tablet_pad_v2_buttons(uint32_t buttons);
        virtual void zwp_tablet_pad_v2_done();
        virtual void zwp_tablet_pad_v2_button(uint32_t time, uint32_t button, uint32_t state);
        virtual void zwp_tablet_pad_v2_enter(uint32_t serial, struct ::zwp_tablet_v2 *tablet, struct ::wl_surface *surface);
        virtual void zwp_tablet_pad_v2_leave(uint32_t serial, struct ::wl_surface *surface);
        virtual void zwp_tablet_pad_v2_removed();

    private:
        void init_listener();
        static const struct zwp_tablet_pad_v2_listener m_zwp_tablet_pad_v2_listener;
        static void handle_group(
            void *data,
            struct ::zwp_tablet_pad_v2 *object,
            struct ::zwp_tablet_pad_group_v2 *pad_group);
        static void handle_path(
            void *data,
            struct ::zwp_tablet_pad_v2 *object,
            const char *path);
        static void handle_buttons(
            void *data,
            struct ::zwp_tablet_pad_v2 *object,
            uint32_t buttons);
        static void handle_done(
            void *data,
            struct ::zwp_tablet_pad_v2 *object);
        static void handle_button(
            void *data,
            struct ::zwp_tablet_pad_v2 *object,
            uint32_t time,
            uint32_t button,
            uint32_t state);
        static void handle_enter(
            void *data,
            struct ::zwp_tablet_pad_v2 *object,
            uint32_t serial,
            struct ::zwp_tablet_v2 *tablet,
            struct ::wl_surface *surface);
        static void handle_leave(
            void *data,
            struct ::zwp_tablet_pad_v2 *object,
            uint32_t serial,
            struct ::wl_surface *surface);
        static void handle_removed(
            void *data,
            struct ::zwp_tablet_pad_v2 *object);
        struct ::zwp_tablet_pad_v2 *m_zwp_tablet_pad_v2;
    };
}

QT_WARNING_POP
QT_END_NAMESPACE

#endif
