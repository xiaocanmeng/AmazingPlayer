#include <gst/gst.h>
#include <iostream>
#ifdef NEEDMOCK
#include "mock.h"
#else
#include <gtk/gtk.h>
#include <gst/gst.h>
#include <gdk/gdk.h>
#endif

/* Structure to contain all our information, so we can pass it to callbacks */
struct CustomData
{ 
  GstElement *playbin; /* Our one and only pipeline */
  GtkWidget *sink_widget;         /* The widget where our video will be displayed */
  GtkWidget *slider;              /* Slider widget to keep track of current position */
  GtkWidget *streams_list;        /* Text widget to display info about the streams */
  gulong slider_update_signal_id; /* Signal ID for the slider update signal */

  GstState state;  /* Current state of the pipeline */
  gint64 duration; /* Duration of the clip, in nanoseconds */
};

/* C++ refactoring tutorial*/
class AMZPlayer
{
private:
  CustomData data;
  static void application_cb(GstBus *bus, GstMessage *msg, CustomData *data);
  static void analyze_streams(CustomData *data);
  static void state_changed_cb(GstBus *bus, GstMessage *msg, CustomData *data);
  static void eos_cb(GstBus *bus, GstMessage *msg, CustomData *data);
  static void error_cb(GstBus *bus, GstMessage *msg, CustomData *data);
  static void tags_cb(GstElement *playbin, gint stream, CustomData *data);
  static gboolean refresh_ui(CustomData *data);
  static void create_ui(CustomData *data);
  static void slider_cb(GtkRange *range, CustomData *data);
  static void delete_event_cb(GtkWidget *widget, GdkEvent *event, CustomData *data);
  static void stop_cb(GtkButton *button, CustomData *data);
  static void pause_cb(GtkButton *button, CustomData *data);
  static void play_cb(GtkButton *button, CustomData *data);
public:
  int32_t StartUP(int32_t argc, char *argv[]);
  
};