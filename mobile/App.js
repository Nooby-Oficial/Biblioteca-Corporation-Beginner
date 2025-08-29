
import React, { useState } from 'react';
import { SafeAreaView, Text, TextInput, Button, View } from 'react-native';
import { API_URL } from '@env';

export default function App() {
  const [a, setA] = useState('2.5');
  const [b, setB] = useState('3.5');
  const [resultado, setResultado] = useState(null);

  const somar = async () => {
    try {
      const res = await fetch(`${API_URL}/soma?a=${a}&b=${b}`);
      const json = await res.json();
      setResultado(json.resultado);
    } catch (e) {
      setResultado('Erro de conexão');
    }
  };

  return (
    <SafeAreaView style={{ flex: 1, justifyContent: 'center', alignItems: 'center' }}>
      <Text style={{ fontSize: 24, marginBottom: 16 }}>Demo Mobile (React Native + API)</Text>
      <View style={{ flexDirection: 'row', marginBottom: 16 }}>
        <TextInput style={{ borderWidth: 1, width: 60, marginRight: 8, padding: 4 }} value={a} onChangeText={setA} keyboardType="numeric" />
        <Text style={{ fontSize: 18 }}>+</Text>
        <TextInput style={{ borderWidth: 1, width: 60, marginLeft: 8, padding: 4 }} value={b} onChangeText={setB} keyboardType="numeric" />
      </View>
      <Button title="Somar (API)" onPress={somar} />
      <Text style={{ marginTop: 24, fontSize: 18 }}>{resultado !== null && `Resultado: ${resultado}`}</Text>
    </SafeAreaView>
  );
}
