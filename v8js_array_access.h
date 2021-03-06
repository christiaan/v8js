/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2013 The PHP Group                                |
  +----------------------------------------------------------------------+
  | http://www.opensource.org/licenses/mit-license.php  MIT License      |
  +----------------------------------------------------------------------+
  | Author: Stefan Siegl <stesie@brokenpipe.de>                          |
  +----------------------------------------------------------------------+
*/

#ifndef V8JS_ARRAY_ACCESS_H
#define V8JS_ARRAY_ACCESS_H

/* Indexed Property Handlers */
void php_v8js_array_access_getter(uint32_t index,
				  const v8::PropertyCallbackInfo<v8::Value>& info);
void php_v8js_array_access_setter(uint32_t index, v8::Local<v8::Value> value,
				  const v8::PropertyCallbackInfo<v8::Value>& info);
void php_v8js_array_access_enumerator(const v8::PropertyCallbackInfo<v8::Array>& info);
void php_v8js_array_access_deleter(uint32_t index,
				   const v8::PropertyCallbackInfo<v8::Boolean>& info);
void php_v8js_array_access_query(uint32_t index,
				 const v8::PropertyCallbackInfo<v8::Integer>& info);

/* Named Property Handlers */
void php_v8js_array_access_named_getter(v8::Local<v8::String> property,
					const v8::PropertyCallbackInfo<v8::Value> &info);

#endif /* V8JS_ARRAY_ACCESS_H */
