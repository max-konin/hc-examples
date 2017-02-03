require 'rest-client'
require 'json'

response = RestClient.get 'http://hc.kerweb.ru/api/v1/lists/graph_adjacency/589307d6af18c20a99000000',  {accept: :json}

puts "Status: #{response.code}"
puts "Body"
puts JSON.pretty_generate(JSON.parse response.body)