/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "PaymentsXsollaApi.h"
#include "IHttpBody.h"
#include "JsonBody.h"
#include "MultipartFormData.h"

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

PaymentsXsollaApi::PaymentsXsollaApi( std::shared_ptr<ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

PaymentsXsollaApi::~PaymentsXsollaApi()
{
}

pplx::task<utility::string_t> PaymentsXsollaApi::createXsollaTokenUrl(std::shared_ptr<XsollaPaymentRequest> request)
{


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = U("/payment/provider/xsolla/payment");
    
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( U("application/json") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = U("text/plain");
    }
    // JSON
    else if ( responseHttpContentTypes.find(U("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(U("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("multipart/form-data");
    }
    // plain text
    else if( responseHttpContentTypes.find(U("text/plain")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("text/plain");
    }
    else
    {
        throw ApiException(400, U("PaymentsXsollaApi->createXsollaTokenUrl does not produce any supported media type"));
    }

    headerParams[U("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;
    consumeHttpContentTypes.insert( U("application/json") );


    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(U("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("application/json");
        web::json::value json;

        json = ModelBase::toJson(request);

        httpBody = std::shared_ptr<IHttpBody>( new JsonBody( json ) );
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(U("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("multipart/form-data");
        std::shared_ptr<MultipartFormData> multipart(new MultipartFormData);
                if(request.get())
        {
            request->toMultipart(multipart, U("request"));
        }

        httpBody = multipart;
        requestHttpContentType += U("; boundary=") + multipart->getBoundary();
    }
    else
    {
        throw ApiException(415, U("PaymentsXsollaApi->createXsollaTokenUrl does not consume any supported media type"));
    }

    //Set the request content type in the header.
    headerParams[U("Content-Type")] = requestHttpContentType;

    // authentication (oauth2_client_credentials_grant) required
    // oauth2 authentication is added automatically as part of the http_client_config
    // authentication (oauth2_password_grant) required
    // oauth2 authentication is added automatically as part of the http_client_config

    return m_ApiClient->callApi(path, U("POST"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , U("error calling createXsollaTokenUrl: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(U("Content-Type")))
        {
            utility::string_t contentType = response.headers()[U("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , U("error calling createXsollaTokenUrl: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        utility::string_t result(U(""));

        if(responseHttpContentType == U("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result = ModelBase::stringFromJson(json);
            
        }
        else if(responseHttpContentType == U("text/plain"))
        {
            result = response;
        }
        // else if(responseHttpContentType == U("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , U("error calling createXsollaTokenUrl: unsupported response type"));
        }

        return result;
    });
}

}
}
}
}

